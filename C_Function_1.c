#include "stdio.h"

// Let's acutally read the code and make sense out of it.

// Here the instructor created a function with a formal parameter num with int
// data type (4 bytes: 0000 0000 0000 0000 0000 0000 0000 0000)
int fun1(int num) {
  int count = 0; // Defined a variable inside the funciton.

  while (num) { // run a while loop with condition of formal parameter num.
    count++;    // Then it pre-increment the value of count
    num >>= 1;  // The we right shift the bits by 1 of num (formal parameter)
    // using bitwise right shift operator.
    // The reason to use this is that after some iteration the num bytes will =
    // 0, and loop will terminate (as 0 = FALSE).
  }

  return count; // Then we return count.
}

int main() {
  int count = fun1(435);
  printf("%d", count);
  return 0;
}

// Answer of the following function will be count will be 9, why
// Cause of reason num = 435 = (110110011 in Binary) as their are 9 bits then
// The loop will run 9 times after that it will terminate as right shifting the
// bits of nums will be 0 after 9th iteration.