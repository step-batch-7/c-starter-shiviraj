#include <stdio.h>

int findGCD(int divident, int divisor)
{
  if (divisor == 0)
  {
    int thirdNumber = divident;
    divident = divisor;
    divisor = thirdNumber;
  }
  int reminder = divident % divisor;
  if (reminder == 0)
  {
    return divisor;
  }
  return findGCD(divisor, reminder);
}

int main(void)
{
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  int gcd = findGCD(num1, num2);
  printf("%d\n", gcd);
  return 0;
}
