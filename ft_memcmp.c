#include "libft.h"
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (n == 0)
        return(0);
    while((int) --n > 0 && *(unsigned char *)s1 == *(unsigned char *)s2)
    {
        s1++;
        s2++;
    }        
    return(*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int main () {
//     printf("%d", ft_memcmp("hola", "abcdefgxyz", 0));
//   return(0);
// }