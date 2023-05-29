#include <stdio.h>

int main() {
  double s1 = 1.0E-13 + 1.0E-13;
  double s2 = (1.0E-13 + (1.0E-13 + 1.0E13)) - 1.0E13;
  double s3 = 12/10;

  printf("s1 = %.15lf\ns2 = %.15lf\ns3 = %.15lf\n", s1, s2, s3);

  return 0;
}