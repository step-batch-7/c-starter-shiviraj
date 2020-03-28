#include <stdio.h>

int findSquare(int num)
{
  return num * num;
}

int findCube(int num)
{
  return num * findSquare(num);
}

int main(void)
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int cube = findCube(num);
  printf("%d\n", cube);
  return 0;
}