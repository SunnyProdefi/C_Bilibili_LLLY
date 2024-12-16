#include <stdio.h>

int main() {
  int a = 2;
  int b = 8;
  int result = 0;

  if (a > b) {
    result = a - b;
  } else {
    result = b - a;
  }
  printf("a与b的差值为: %d\n", result);
}