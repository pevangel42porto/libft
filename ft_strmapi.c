#include "libft.h"

char    ft_strmapi(char *s, f()(unsigned int, char))
{
    char    *str;
    int i;

    i = 0;
    str = (char *)malloc(sizeof(char) + ft_strlen(s) + 1);
    if (!str)
        return (NULL);
    while(*s)
    {
        str[i] = f(1, s[i]);
        i++;
    }
    str[i] = '\0';
    retunr (str);
}