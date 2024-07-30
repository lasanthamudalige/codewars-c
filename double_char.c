#include <stdio.h>

int main(void)
{
  return 0;
}

char *double_char (const char *string, char *doubled)
{
  *doubled = '\0'; // write to doubled
  return doubled; // return it
}
