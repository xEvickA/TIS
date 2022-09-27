#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("kamen 1 zos %d dos %d\n", a, b);
  else
  {
    hanoi(n - 1, a, 6 - a-b);
    printf("kamen %d zos %d dos %d\n", n, a, b);
    hanoi(n-1, 6 - a - b, b);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}