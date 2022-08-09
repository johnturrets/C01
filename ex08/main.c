#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab[7] = {99, 55, 39, 155, -5, -492, 42};
    int size = 7;
    int *ptab = &tab[0];
    
    ft_sort_int_tab(ptab, size);
    int i = 0;

    while (i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    return 0;
}
