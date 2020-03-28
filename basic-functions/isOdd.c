#include <stdio.h>

int isEven(int num)
{
  return num % 2 == 0;
}

int isOdd(int num)
{
  return !isEven(num);
}

int main(void)
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int isOddNum = isOdd(num);
  printf("%d\n", isOddNum);
  return 0;
}