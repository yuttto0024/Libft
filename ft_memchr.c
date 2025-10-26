/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:38:02 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/26 14:49:08 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;
	unsigned char		sc;
	size_t				i;

	t = (const unsigned char *)s;
	sc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (t[i] == sc)
			return ((void *)&t[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	s[] = "Happy";
	int		c;
	size_t	n;

	c = 'p';
	n = 5;
	printf("---memchr---\n");
	printf("%p\n", memchr(s, c, n));
	printf("---ft_memchr---\n");
	printf("%p\n", ft_memchr(s, c, n));
}
*/