#include "stdio.h"

void f1(int a, int b) { // A call by value function that switchs the two
                        // variable value with each other.
  int c;
  c = a;
  a = b;
  b = c;
}

void f2(int *a, int *b) { // A call by reference Functions that switches two
  // variable memory address value with each other

  // The *a points to &b, and *b points to &c
  int c;
  c = *a;
  *a = *b;
  *b = c;
}

int main() {
  int a = 4, b = 5, c = 6; // Initialized variable a, b & c
  f1(a, b);   // Call by Value function that does not change the actual
              // parameters.
  f2(&b, &c); // Call by reference function that changes the actual parametes.
  // The twist is, here instructor gave b & c, looking at function f2()

  printf("%d", c - a - b);
  return 0;
}