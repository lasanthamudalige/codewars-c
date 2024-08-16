/*

Task

Given a string, you have to return a string in which each character (case-sensitive) is repeated once.
Examples (Input -> Output):

* "String"      -> "SSttrriinngg"
* "Hello World" -> "HHeelllloo  WWoorrlldd"
* "1234!_ "     -> "11223344!!__  "

*/

#include <stdio.h>
char *double_char(const char *, char *);

/*

Test Cases

do_test("", "");
do_test("a", "aa");
do_test("abcd", "aabbccdd");
do_test("Adidas", "AAddiiddaass");
do_test("1337", "11333377");
do_test("illuminati", "iilllluummiinnaattii");
do_test("123456", "112233445566");
do_test("%^&*(", "%%^^&&**((");

*/

int main(void) {
  const char *string = {"%^&*("};
  char *doubled;

  double_char(string, doubled);
  printf("%s\n", doubled);

  return 0;
}

/* TODO: Complete this function  */
char *double_char(const char *string, char *doubled) {
  while (*string) {
	*doubled++ = *string;
	*doubled++ = *string;

    string++;
  }

  *doubled = '\0';

  return  doubled;
}
