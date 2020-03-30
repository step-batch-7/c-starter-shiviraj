#include <stdio.h>

int find_factorial(int);
void print_fibonacci(int);
unsigned char is_odd(int);
void print_every_nth_num(int, int, int);
void print_odd_between_two(int, int);
void print_odd_num_1_to_n(int);
void print_even_between_two(int, int);
void print_even_num_1_to_n(int);
void print_multiplication_table(int, int);
int sum_of_n_num(int, int);
int product_of_n_num(int, int);
int sum_of_every_nth_num(int, int, int);
int sum_of_evens_between_two(int, int);
void print_every_nth_num_in_reverse(int, int, int);
void print_odd_between_two_in_reverse(int, int);
void print_odd_N_to_1(int);

int find_factorial(int num)
{
  return num ? num * find_factorial(num - 1) : 1;
}

void print_fibonacci(int num)
{
  int current_term = 0;
  int next_term = 1;
  for (num; num > 0; num--)
  {
    printf("%d\n", current_term);
    next_term = current_term + next_term;
    current_term = next_term - current_term;
  }
}

unsigned char is_odd(int num)
{
  return num % 2;
}

void print_every_nth_num(int start_num, int end_num, int n)
{
  for (start_num; start_num <= end_num; start_num += n)
  {
    printf("%d\n", start_num);
  }
}

void print_odd_between_two(int start_num, int end_num)
{
  start_num = is_odd(start_num) ? start_num : ++start_num;
  print_every_nth_num(start_num, end_num, 2);
}

void print_odd_num_1_to_n(int num)
{
  print_odd_between_two(1, num);
}

void print_even_between_two(int start_num, int end_num)
{
  start_num = is_odd(start_num) ? ++start_num : start_num;
  print_every_nth_num(start_num, end_num, 2);
}

void print_even_num_1_to_n(int num)
{
  print_even_between_two(1, num);
}

void print_multiplication_table(int table, int end_num)
{
  for (int num = 1; num <= end_num; num++)
  {
    printf("%d * %d = %d\n", table, num, table * num);
  }
}

int sum_of_n_num(int starting_num, int total_num)
{
  int sum = 0;
  for (total_num; total_num > 0; total_num--)
  {
    sum = sum + starting_num + total_num;
  }
  return sum;
}

int product_of_n_num(int starting_num, int total_num)
{
  int product = 1;
  for (int num = starting_num; num < starting_num + total_num; num++)
  {
    product = product * num;
  }
  return product;
}

int sum_of_every_nth_num(int start_num, int end_num, int n)
{
  int sum = 0;
  for (start_num; start_num <= end_num; start_num += n)
  {
    sum += start_num;
  }
  return sum;
}

int sum_of_evens_between_two(int start_num, int end_num)
{
  start_num = is_odd(start_num) ? ++start_num : start_num;
  return sum_of_every_nth_num(start_num, end_num, 2);
}

void print_every_nth_num_in_reverse(int start_num, int end_num, int n)
{
  for (end_num; end_num >= start_num; end_num -= n)
  {
    printf("%d\n", end_num);
  }
}

void print_odd_between_two_in_reverse(int start_num, int end_num)
{
  end_num = is_odd(end_num) ? end_num : --end_num;
  print_every_nth_num_in_reverse(start_num, end_num, 2);
}

void print_odd_N_to_1(int num)
{
  print_odd_between_two_in_reverse(1, num);
};

int main(void)
{
  int num1, num2, num3;
  printf("\nEnter a num to find factorial, print fibonacci series: ");
  scanf("%d", &num1);
  printf("\n1. Factorial\t factorial of %d is %d\n", num1, find_factorial(num1));
  printf("\n2. Fibonacci\t fibonacci series\n", num1);
  print_fibonacci(num1);

  printf("\nEnter a num to print the odd and even num between 1 to N: ");
  scanf("%d", &num1);
  printf("\n3. Odd num 1 to N :\n");
  print_odd_num_1_to_n(num1);
  printf("\n4. Even num 1 to N :\n");
  print_even_num_1_to_n(num1);

  printf("\nEnter two num to print multiplication table: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("\n5. Multiplication table  :\n");
  print_multiplication_table(num1, num2);

  printf("\nEnter two num to calculate sum and product of n num: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("\n6. Sum of %d nums from %d: %d\n", num2, num1, sum_of_n_num(num1, num2));
  printf("\n7. Product of %d nums from %d: %d\n", num2, num1, product_of_n_num(num1, num2));

  printf("\nEnter two num to print all odd numbers between two numbers: ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  printf("\n8. Print all odd numbers between two numbers \n");
  print_odd_between_two(num1, num2);

  printf("\nEnter three num to print every nth num between two nums : ");
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  printf("\n9. Print every %d num from %d to %d \n", num3, num1, num2);
  print_every_nth_num(num1, num2, num3);
  printf("\n10. Sum of all even num between %d to %d is ", num1, num2);
  printf("%d\n", sum_of_evens_between_two(num1, num2));

  printf("\nEnter a num to print the odd num reverse N to 1: ");
  scanf("%d", &num1);
  printf("\n11. print odd num from %d to 1\n", num1);
  print_odd_N_to_1(num1);
  return 0;
}