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

float find_simple_interest(int principle_amount, float rate, float time)
{
  return principle_amount * rate * time / 100;
}

float power(float base, float exponent)
{
  float result = 1;
  for (exponent; exponent > 0; exponent--)
  {
    result = result * base;
  }
  return result;
}

float find_compound_interest(int principle_amount, float rate, float time)
{
  return principle_amount * (power((1 + rate / 100), time) - 1);
}

int main(void)
{
  int principle;
  float time, rate;

  printf("Enter three numbers: ");
  scanf("%d", &principle);
  scanf("%f", &rate);
  scanf("%f", &time);
  float compound_interest = find_compound_interest(principle, rate, time);
  printf("%.2f\n", compound_interest);
  return 0;
}