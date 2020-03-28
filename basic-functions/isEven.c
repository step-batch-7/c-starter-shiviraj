#include <stdio.h>

int isEven(int num)
{
  return num % 2 == 0;
}

int main(void)
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int isEvenNum = isEven(num);
  printf("%d\n", isEvenNum);
  return 0;
}