#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *d;
    size_t x;

    if (!s)
        return (NULL);
    x = len;
    if (start > ft_strlen(s))
    {
        d = ft_calloc(1, 1);
        return (d);
    }
    if (len > ft_strlen(s + start))
        d = malloc(ft_strlen(s + start) * sizeof(char) + 1);
    else
        d = malloc(len * sizeof(char) + 1);
    
    if (d == NULL)
        return (NULL);
    s += start;
    while (*s && len--)
        *d++ = *s++;
    *d = 0;
    return (d - x);
}

//  int main(void)
// {
//     char *s = " ipsum dolor sit ameloremt";
//     //printf("REAL = %d\n", ft_substr(s, 0, 22));
//     printf("MIA = %s\n", ft_substr(s, 5, 273));
// }

