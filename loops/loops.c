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

int main(void)
{
  int num;
  printf("Enter a num: ");
  scanf("%d", &num);
  print_fibonacci(num);
  return 0;
}