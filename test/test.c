#include  <stdio.h>
#include  <malloc.h>
#include  "my_lib.h"

#define SYSLOG_MSG  "MY_LOGGER_TEST"

int main(int argc, char **argv)
{
  my_echo_int(123);
  my_echo_double(123.456);
  my_echo_string("hello world");
  printf("my_add_return_int(30, 40) = %d\n", my_add_return_int(30, 40));

  char *add;
  add = my_add_return_str("hello", "world");
  printf("my_add_return_str(\"hello\", \"world\") = \"%s\"\n", add);
  free(add);

  my_logger(SYSLOG_MSG);
  return  0;
}
