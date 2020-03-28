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

void print_every_2nd_num(int start_num, int end_num)
{
  for (int num = start_num; num <= end_num; num += 2)
  {
    printf("%d\n", num);
  }
}

void print_odd_between_two(int start_num, int end_num)
{
  start_num = is_odd(start_num) ? start_num : ++start_num;
  print_every_2nd_num(start_num, end_num);
}

void print_even_between_two(int start_num, int end_num)
{
  start_num = is_odd(start_num) ? ++start_num : start_num;
  print_every_2nd_num(start_num, end_num);
}

int main(void)
{
  int num;
  printf("Enter a num: ");
  scanf("%d", &num);
  print_even_between_two(1, num);
  return 0;
}