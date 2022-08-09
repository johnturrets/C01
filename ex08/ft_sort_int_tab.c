void    ft_sort_int_tab(int *tab, int size)
{
    int *pos = tab;
    int temp = 0;
    int min = 0;
    int swapped = 1;
    while (swapped == 1)
    {
        swapped = 0;        
        // go till second last element
        while(pos < tab + size - 1)
        {
            if (*pos > *(pos + 1))
            {
                temp = *(pos + 1);
                *(pos + 1) = *pos;
                *pos = temp;
                swapped = 1;
            }
            pos++;
        }
        pos = tab;
    }
}
