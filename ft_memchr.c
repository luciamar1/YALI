/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:25:00 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/08/10 12:38:27 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	while (--n && *(char *)s == (char)(c & 0xff))
		s++;
	if (n == 0)
		return (NULL);
	return ((char *)s);
}

// int main(void){
//     char r[] = {0, 1, 2 ,3 ,4 ,5};
//     char m[] = {0, 1, 2 ,3 ,4 ,5};
//     printf("real = %s\n", memchr(r, 2 + 256, 3));
//     printf("mia = %s\n", ft_memchr(m, 2 + 256, 3));
// }