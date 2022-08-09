#include "libft.h"


// void *bfree(char **m)
// {
//     while(*m)
//     {
//         if(**m)
//             free(*m);
//         free(m++);
//     }
//     return (NULL);
// }

char *mallocseg(char *m, char *s, char c)
{
    int i;

    i = 0;
    while(s[i] && s[i] != c)
        i++;
    m = (char *)malloc((i + 1) * sizeof(char));
    if (!m)
        return(NULL);
    m[i]  = 0;
    return(m);
}

char *pon(const char **s, char c, char *m)
{
    int n;

    n = 0;
    if (m == 0)
        return(m);
    while (**s && **s != c)
    {
        m[n ++] = **s;
        (*s) ++;
    }

    return(m);
}

int pridimensioncount(char const *s, char c)
{
     int l;

    l = 0;
    while(*s)
    {
        if (*s != c)
        {
            l ++;
             while (*s && *s != c)
                s ++;
        }
        if(*s)
            s ++;
    }
    return(l);
}

char    **ft_split(char const *s, char c)
{
    char    **m;
    int     p;
    int     i;

    if (!s)
        return (NULL);
    p = pridimensioncount(s,c);
    i = p;
    m = malloc((p + 1) * sizeof(char *));
    if (!m)
         return (NULL);
    m[p] = NULL;
    if (!s || !c || p == 0)
        return(m);
    while (p--)
    {
        while (*s && *s == c)
            s++;
        *m = pon(&s, c, mallocseg(*m, (char *)s, c));
        if (!*m)
        {
            while (i - p++)
                free(*(--m));
            free(m);
        }
        m++;
    }    
    return(m - i);
}

// int main(void)
// {
//     char    **result;

//     result = ft_split("", 'z');
//     int  i = 0;
//     while (result[i])
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
//     return(0);
// }

// "     split       this for   me  !       "
// "                  olol"
// "olol                     "
// "hola que tal"
