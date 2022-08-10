#include "libft.h"
#include <unistd.h>
#include <string.h>

/*char *ft_strnstr(const char *s, const char *f, size_t n)
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
*/
char *ft_strnstr(const char *s, const char *f, size_t n)
{
    if (!f)
        return((char *)s);
    while(*s++ && --n )
    {
        if(!ft_strncmp(s,f,n))
            return((char *)s);
    }
    return (NULL);
}

/*char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	l;
	size_t			i;

	i = 0;
	l = ft_strlen(little);
	if (!l)
		return ((char *)big);
	while (big[i] && (i + l - 1) < len)
	{
		if (!ft_strncmp((big + i), little, l))
			return ((char *)big + i);
		++i;
	}
	return ((char *)0);
}

int     main(void)
{
         const char *s = "hola que tal";
         const char *f = "que";
         //printf("MIO = %s", ft_strnstr(s, f, -1));
         printf("REAL = %s\n", ft_strnstr(s, f, 9));
         return(0);
}*/