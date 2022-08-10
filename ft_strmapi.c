#include "libft.h"



char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if(!s || !f)
        return(NULL);
    unsigned int i;
    int l;
    char *m;

    l = ft_strlen(s);
    m = (char *)malloc((l + 1)  * sizeof(char));
    if(!m)
         return(NULL);

    m[l] = 0;
    i = 0;
    while (i < (unsigned int)l)
    {
        m[i] = f(i, s[i]);
        i++;
    }
    return(m);
}

// int main(void)
// {
//     printf("%s", ft_strmapi("hola que tal", f));
//     return(0);
// }