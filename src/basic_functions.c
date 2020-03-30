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

float find_simple_interest(float principle_amount, float rate, float time)
{
  return principle_amount * rate * time / 100;
}

float find_compound_interest(int principle_amount, float rate, float time)
{
  float amount = principle_amount;
  for (time; time > 0; time--)
  {
    amount = find_simple_interest(amount, rate, 1) + amount;
  }
  return amount - principle_amount;
}

float convert_temp_F_to_C(float temp_in_F)
{
  return (temp_in_F - 32) * 5 / 9;
}

float convert_temp_C_to_F(float temp_in_C)
{
  return (temp_in_C * 9 / 5) + 32;
}

int find_greatest_num(int num1, int num2)
{
  if (num1 > num2)
  {
    return num1;
  }
  return num2;
}

int find_greatest_of_three(int num1, int num2, int num3)
{
  int greatest_num = find_greatest_num(num1, num2);
  return find_greatest_num(greatest_num, num3);
}

float find_average_of_three(int num1, int num2, int num3)
{
  float total = num1 + num2 + num3;
  return total / 3;
}

int main(void)
{
  int num1, num2, num3;
  printf("\nEnter a num to find is_even, is_odd, square and cube: ");
  scanf("%d", &num1);
  printf("1. is_even\t %d is %s\n", num1, is_even(num1) ? "even" : "not even");
  printf("2. is_odd\t %d is %s\n", num1, is_odd(num1) ? "odd" : "not odd");
  printf("3. square\t square of %d is %d\n", num1, find_square(num1));
  printf("4. cube\t\t cube of %d is %d\n", num1, find_cube(num1));

  printf("\nEnter two numbers to find GCD and LCM: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("5. GCD\t GCD of %d, %d is %d\n", num1, num2, find_gcd(num1, num2));
  printf("6. LCM\t LCM of %d, %d is %d\n", num1, num2, find_lcm(num1, num2));

  printf("\nEnter principle, rate and time to find SI and CI: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  float si = find_simple_interest(num1, num2, num3);
  printf("7. SI\t SI of %d, %d, %d is %.2f\n", num1, num2, num3, si);
  float ci = find_compound_interest(num1, num2, num3);
  printf("8. CI\t CI of %d, %d, %d is %.2f\n", num1, num2, num3, ci);

  printf("\nEnter temperature to convert from F to C and C to F: ");
  scanf("%d", &num1);
  printf("9. F to C\t %d C is %.2f\n", num1, convert_temp_F_to_C(num1));
  printf("10. C to F\t %d F is %.2f\n", num1, convert_temp_C_to_F(num1));

  printf("\nEnter three nums to find greatest and average: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  int greatest = find_greatest_of_three(num1, num2, num3);
  printf("11. Greatest\tGreatest of %d, %d, %d is %d\n", num1, num2, num3, greatest);
  float average = find_average_of_three(num1, num2, num3);
  printf("12. Average\t average of %d, %d, %d is %.2f\n", num1, num2, num3, average);
  return 0;
}