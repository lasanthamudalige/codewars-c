/*
Task

 Create a function that takes an integer as an argument and returns "Even" for
even numbers or "Odd" for odd numbers.
*/

#include <stdio.h>
const char *even_or_odd(int);

int main(void) {
  /* Input: 0, 1, 21, 2, 100, -1, -21, -2, -100 */

  /* Test numbers */
  int numbers[9] = {0, 1, 21, 2, 100, -1, -21, -2, -100};

  for (int i = 0; i < 9; i++) {
    printf("%s\n", even_or_odd(numbers[i]));
  }

  /* Output: Even Odd Odd Even Even Odd Odd Even Even */

  return 0;
}

const char *even_or_odd(int number) {
  if (number % 2 == 0) {
    return "Even";
  } else {
    return "Odd";
  }
}
