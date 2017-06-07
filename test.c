#include  <stdio.h>
#include  "my_lib.h"

int main(int argc, char **argv)
{
  if (argc == 1)  {
    printf("./test log_message\n");
  } else  {
    my_logger(argv[1]);
  }
  return  0;
}
