#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char) (c & 0xff))
            return ((char *) s);
        s++;
    }
    if ((char) (c & 0xff) == 0)
        return ((char *) s);
    return (NULL);
}

// int main () {
//    const char str[] = "";
//    const char ch = 'o';
//    char *ret;

//    ret = ft_strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }
