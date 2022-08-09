/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <lucia-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:25:00 by lucia-ma          #+#    #+#             */
/*   Updated: 2022/08/09 04:57:12 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return (NULL);
	while (*(char *)s && --n)
	{
		if (*(char *)s == (char)(c & 0xff))
			return ((void *)s);
		s++;
	}
	if (c == 0)
		return ((void *)s);
	return (NULL);
}

// int main(void){
//     char r[] = {0, 1, 2 ,3 ,4 ,5};
//     char m[] = {0, 1, 2 ,3 ,4 ,5};
//     printf("real = %s\n", memchr(r, 2 + 256, 3));
//     printf("mia = %s\n", ft_memchr(m, 2 + 256, 3));
// }