#include <stdio.h>

void ft_ft_swap(int *a, int *b);

int main(void)
{
  int a, b;
  a = 24;
  b = 42;
  int *z = &a;
  int *x = &b;

  printf("z: %d, x: %d\n", *z, *x);
  ft_ft_swap(z, x);
  printf("z: %d, x: %d\n", *z, *x);
}

