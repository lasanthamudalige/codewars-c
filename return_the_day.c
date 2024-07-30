#include <stdio.h>
char* whatday(int);

int main(void) {
  /* Input: 1, 2, 3, 4, 5, 6, 7 */

  for (int i = 1; i <= 7; i++) {
    printf("%s\n", whatday(i));
  }

  /* Output: Sunday Monday Tuesday Wednesday Thursday Friday Saturday */
  return 0;
}

char* whatday(int num) {
  switch (num) {
	case 1:
	  return "Sunday";
 	case 2:
	  return "Monday";
 	case 3:
	  return "Tuesday";
 	case 4:
	  return "Wednesday";
 	case 5:
	  return "Thursday";
 	case 6:
	  return "Friday";
 	case 7:
	  return "Saturday";
  default: return "Wrong, please enter a number between 1 and 7";
  }
}
