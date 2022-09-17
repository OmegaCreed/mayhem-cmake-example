#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fuzzme(char *buf)
{
  if(strlen(buf) >= 3)
    if(buf[0] == 'b')
      if(buf[1] == 'u')
        if(buf[2] == 'g') {
          printf("You've got it!");
          abort();
        }
    return 0;
}

int LLVMFuzzerTestOneInput(char* data, size_t size)
{
  int result = fuzzme(data);
  return 0;
}
