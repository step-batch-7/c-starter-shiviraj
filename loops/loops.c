#include <stdio.h>

int find_factorial(int num)
{
  return num ? num * find_factorial(num - 1) : 1;
}

void print_fibonacci(int num)
{
  int current_term = 0;
  int next_term = 1;
  while (num > 0)
  {
    printf("%d\n", current_term);
    next_term = current_term + next_term;
    current_term = next_term - current_term;
    num--;
  }
}

unsigned char is_odd(int num)
{
  return num % 2;
}

void print_every_nth_num(int start_num, int end_num, int n)
{
  for (int num = start_num; num <= end_num; num += n)
  {
    printf("%d\n", num);
  }
}

void print_odd_between_two(int start_num, int end_num)
{
  start_num = is_odd(start_num) ? start_num : ++start_num;
  print_every_nth_num(start_num, end_num, 2);
}

void print_even_between_two(int start_num, int end_num)
{
  start_num = is_odd(start_num) ? ++start_num : start_num;
  print_every_nth_num(start_num, end_num, 2);
}

void print_multiplication_table(int table, int end_num)
{
  for (int num = 1; num <= end_num; num++)
  {
    printf("%d * %d = %d\n", table, num, table * num);
  }
}

int sum_of_zero_to_n(int n)
{
  int sum = 0;
  for (int num = 0; num <= n; num++)
  {
    sum = sum + num;
  }
  return sum;
}

int sum_of_n_num(int starting_num, int total_num)
{
  int sum = starting_num * total_num;
  return sum + sum_of_zero_to_n(total_num - 1);
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

int main(void)
{
  int num;
  printf("Enter a num: ");
  scanf("%d", &num);
  int product = product_of_n_num(num, 5);
  printf("%d\n", product);
  return 0;
}