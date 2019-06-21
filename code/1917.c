#include <stdio.h>
int Factorial(int a, int b);
int main() {
  int m, n;
  int r;
  scanf("%d%d", &m, &n);
  r = Factorial(m, n);
  printf("%d\n", r);
  return 0;
}
int Factorial(int a, int b) {
  int sum;
  if (b == 0)
    sum = 1;
  else if (b == 1)
    sum = a;
  else if (a == b)
    sum = 1;
  else {
    sum = Factorial(a - 1, b - 1) + Factorial(a - 1, b);
  }
  return sum;
}