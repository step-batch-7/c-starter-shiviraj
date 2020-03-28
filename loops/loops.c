#include <stdio.h>

int find_factorial(int num)
{
  return num ? num * find_factorial(num - 1) : 1;
}

int main(void)
{
  int num;
  printf("Enter a num: ");
  scanf("%d", &num);
  int factorial = find_factorial(num);
  printf("%d\n", factorial);
  return 0;
}