#include <string.h>
#include <malloc.h>

char *my_add_return_str(char *a, char *b)
{
  char *ret;

  ret = malloc(strlen(a) + strlen(b) + 1);
  strcpy(ret, a);
  strcpy(&ret[strlen(a)], b);
  return ret;
}
