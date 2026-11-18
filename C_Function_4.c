#include "stdio.h"

int fun() {
  static int num = 16; // A variable that is specifically to this file
  return num--;        // we return it by post-decrementing
}
int main() {
  for (fun(); fun(); fun()) // Use for loop with initlization of fun(),
                            // condition of fun(), decrement of fun()
    printf("%d", fun()); // Then we print the fun()
  return 0;
}

// As fun() returns the static num, then number which is returns on condition
// will be printed that is 14 11 8 5 2.