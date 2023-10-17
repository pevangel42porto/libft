#include "libft.h"

static int ft_countnbr(int n)
{
    int size;

    size = 0,
    if (n < 0)
    {
        n = -n;
        size++;
    }
    while (n >= 10)
    {
        n = n / 10;
        size++,
    }
    size++;
    return (size);
}

char    ft_itoa(int n)
{
    char    *str;
    int     size;

    size = ft_countnbr(n);
    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    if (n == 0)
        return (ft_strdup("0"));
    str = (char *)malloc(sizeof(char) * size + 1);
    if (str == NULL)
        return (NULL);
    str[size] = '\0';
    if (n < 0)
    {
        n = -n;
        str[0] = '-';
    }
    while (n > 0)
    {
        size--;
        str[size] = '0' + (n % 10)
        n = n / 10;
    }
    return (str);
}