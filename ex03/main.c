#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) {
    int m = a % b;
    int d = a / b;
    a = m;
    b = d;

    mod = &a;
    div = &b;
}

int main(void)
{
    int *div = NULL;
    int *mod = NULL;
    
    int a = 42;
    int b = 24;

    ft_div_mod(a, b, div, mod);
    printf("z: %d, x: %d\n", *div, *mod);
    return 0;
}
