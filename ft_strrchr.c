#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    char *s;

    s = (char *)str;
    while (*str)
    {
        if (*str == (char) (c & 0xff))
            s = (char *)str;
        str ++;
    }
    if ((char) (c & 0xff) == '\0' && *str == '\0')
        return ((char *)str);
    if (*s == (char) (c & 0xff) || (char) (c & 0xff) == 0)
        return (s);
    return (NULL);
}

// int main () {
//    const char str[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//    const char ch = '\0';
//    char *ret;

//    ret = ft_strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }