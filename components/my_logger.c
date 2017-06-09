#include <syslog.h>
#include <stdarg.h>

#define SYSLOG_IDENT  "MY_EXT"

void my_logger(const char *fmt, ...)
{
  va_list     argv;
  static  int syslog_opened = 0;

  if (!syslog_opened) {
    openlog(SYSLOG_IDENT, 0, LOG_INFO);
    syslog_opened = 1;
  }
  va_start(argv, fmt);
  vsyslog(LOG_INFO, fmt, argv);
  va_end(argv);
}
