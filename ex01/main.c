#include <stdio.h>

void ft_ultimate_ft(int **nbr);

int main(void)
{
  int **nbr = NULL;
  ft_ultimate_ft(nbr);
  printf("%d\n", **nbr);
  return 0;
}
