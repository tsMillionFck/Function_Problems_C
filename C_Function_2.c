#include "stdio.h"

// this question features loops and Bitwise operator Right Shift
int func(int num) {
  int count = 2;
  while (num) {
    count++;   // With each iteration count will increment by 2.
    num >>= 2; // Num will right shift by 2 bits. Meaning 2 bits from front will
               // be terminated to 0.
  }
  return count;
}

int main() {
  // Binary representation of 435 = 110110011
  int count = func(
      435); // And the output will be 5 of the increment + 2 the initial value.
  printf("%d", count);
  return 0;
}