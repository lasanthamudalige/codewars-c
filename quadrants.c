/*
Task

Given a point in a Euclidean plane (x and y), return the quadrant the point exists in: 1, 2, 3 or 4 (integer). x and y are non-zero integers, therefore the given point never lies on the axes.

Examples:
(1, 2)     => 1
(3, 5)     => 1
(-10, 100) => 2
(-1, -9)   => 3
(19, -56)  => 4
(1, 1) => 1
(-60, -12) => 3

There are four quadrants:

    First quadrant, the quadrant in the top-right, contains all points with positive X and Y
    Second quadrant, the quadrant in the top-left, contains all points with negative X, but positive Y
    Third quadrant, the quadrant in the bottom-left, contains all points with negative X and Y
    Fourth quadrant, the quadrant in the bottom-right, contains all points with positive X, but negative
*/

#include <stdio.h>
enum quadrants quadrant(int, int);

enum quadrants {I=1, II, III, IV};
int main(void) {
  printf("Expected result: 1, Got: %d\n", quadrant(1, 2));
  printf("Expected result: 1, Got: %d\n", quadrant(3, 5));
  printf("Expected result: 2, Got: %d\n", quadrant(-10, 100));
  printf("Expected result: 3, Got: %d\n", quadrant(-1, -9));
  printf("Expected result: 1, Got: %d\n", quadrant(1, 1));
  printf("Expected result: 3, Got: %d\n", quadrant(-60, -12));
  return 0;
}

enum quadrants quadrant(int x, int y) {
  if (x > 0 && y > 0) {
	return I;
  } else if (x < 0 && y > 0) {
	return II;
  } else if (x < 0 && y < 0) {
	return III;
  } else {
	return IV;
  }
}
