#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int a = 42;
  int *nbr = &a;

  ft_ft(nbr);
  printf("%d\n", *(nbr));
  return 0;
}
