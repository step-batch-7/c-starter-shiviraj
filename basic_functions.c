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

int main(void)
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  char square = find_square(num);
  printf("%d\n", square);
  return 0;
}