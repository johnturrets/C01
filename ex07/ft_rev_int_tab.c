void    ft_rev_int_tab(int *tab, int size)
{
    int *left = tab;
    int *right = tab + size - 1;
    int temp = 0;

    while(left < right)
    {
        temp = *right;
        *right = *left;
        *left = temp;
        left++;
        right--;
    }
}
