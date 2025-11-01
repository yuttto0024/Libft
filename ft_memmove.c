/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:05:23 by yuonishi          #+#    #+#             */
/*   Updated: 2025/11/01 20:19:09 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

static void	ft_copy_backward(unsigned char *d, const unsigned char *s, size_t n)
{
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
}

static void	ft_copy_forward(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d > s)
		ft_copy_backward(d, s, n);
	else
		ft_copy_forward(d, s, n);
	return (dest);
}

/*
int	main(void)
{
	char	test1[] = "abcdefg";
	char	test2[] = "abcdefg";
	char	test3[] = "abcdefg";
	char	test4[] = "abcdefg";
	char	*dest;
	char	*src;
	
	printf("---memmove_foreward---\n");
	dest = &test1[1];
	src = &test1[3];
	memmove(dest, src, 3);
	printf("%s\n", test1);

	printf("---ft_memmove_foreward---\n");
	dest = &test2[1];
	src = &test2[3];
	ft_memmove(dest, src, 3);
	printf("%s\n", test2);

	printf("---memmove_backward---\n");
	dest = &test3[3];
	src = &test3[1];
	memmove(dest, src, 3);
	printf("%s\n", test3);

	printf("---ft_memmove_backward---\n");
	dest = &test4[3];
	src = &test4[1];
	ft_memmove(dest, src, 3);
	printf("%s\n", test4);
}
*/