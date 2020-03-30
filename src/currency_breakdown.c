#include <stdio.h>

int print_money(money, denominations)
{
  int unit = money / denominations;
  if (unit)
  {
    printf("%d x Rs %d\n", unit, denominations);
  }
  return money % denominations;
}

void print_currency(int money)
{
  money = print_money(money, 2000);
  money = print_money(money, 500);
  money = print_money(money, 200);
  money = print_money(money, 100);
  money = print_money(money, 50);
  money = print_money(money, 10);
  money = print_money(money, 5);
  print_money(money, 1);
}

int main(void)
{
  int money;
  printf("Enter money: ");
  scanf("%d", &money);
  print_currency(money);
  return 0;
}