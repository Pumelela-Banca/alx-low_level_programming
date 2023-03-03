#include <stdio.h>
//#include "_putchar.c"
#include "5-string_toupper.c"

char *string_toupper(char *s);
void main(void)
{
  // for (int v = 33; v < 123; v)
  // {
  //   _putchar(v);
  //   v++;
  //}

  printf("%s", string_toupper("abcdefghijklmnopqrstuvwxyz"));  
}