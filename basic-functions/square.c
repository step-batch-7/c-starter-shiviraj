#include <stdio.h>

int findSquare(int num)
{
  return num * num;
}

int main(void)
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int square = findSquare(num);
  printf("%d\n", square);
  return 0;
}