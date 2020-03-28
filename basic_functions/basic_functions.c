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

float convert_fahrenheit_to_celsius(float temp_in_F)
{
  return (temp_in_F - 32) * 5 / 9;
}

float convert_celsius_to_fahrenheit(float temp_in_C)
{
  return (temp_in_C * 9 / 5) + 32;
}

int main(void)
{
  int temp;
  printf("Enter temp in F: ");
  scanf("%d", &temp);
  float temp_in_C = convert_fahrenheit_to_celsius(temp);
  printf("%.2f\n", temp_in_C);
  return 0;
}