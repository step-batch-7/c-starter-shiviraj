#include <stdio.h>

unsigned char is_even(int num)
{
  return num % 2 == 0;
}

unsigned char is_odd(int num)
{
  return !is_even(num);
}

int find_square(int num)
{
  return num * num;
}

int find_cube(int num)
{
  return num * find_square(num);
}

int find_gcd(int divident, int divisor)
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
  return find_gcd(divisor, reminder);
}

int find_lcm(int num1, int num2)
{
  return num1 * num2 / find_gcd(num1, num2);
}

int main(void)
{
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  int lcm = find_lcm(num1, num2);
  printf("%d\n", lcm);
  return 0;
}