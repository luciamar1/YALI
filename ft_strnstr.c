#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char *ft_strnstr(const char *s, const char *f, size_t n)
{
    if (*f == 0 || f == s)
        return ((char *)s);
    if (n == 0)  
        return (NULL);
    int lf;

    lf = ft_strlen(f); 
    while(*s && (int) --n > 0)
    {
        if (*s == *f )
        {
            while (*s == *f && (int) --n)
            {
                s++;
                f++;
            }
            if (!*f && (int) n)
                return((char *)s - lf);
            else
                while(*f && (int) --n)
                    f++;
               f -= lf;
        }
        s++;
    }
    return(NULL);
}

// int     main(void)
// {
//         const char *s = "aaabcabcd";
//         const char *f = "aabc";
//         printf("MIO = %s", ft_strnstr(s, f, -1));
//         printf("REAL = %s", strnstr(s, f, -1));
//         return(0);
// }