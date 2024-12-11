#include <stdio.h>
#include <math.h>

int main() {
  const float PI = 3.1415926535;
  float radius = 5.0;
  float area = PI * pow(radius, 2);
  printf("Area of the circle is: %f\n", area);
  return 0;
}