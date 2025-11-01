/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:59:36 by yuonishi          #+#    #+#             */
/*   Updated: 2025/11/01 20:19:07 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (n > i)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	char	src[] = "42 Tokyo!";
	char	dest1[] = "--------------------"; 
	char	dest2[] = "--------------------" ;
	size_t	i;
	
	i = 8;
	printf("---memset---\n");
	memcpy(dest1, src, i);
	printf("%s\n", dest1);
	printf("---ft_memset---\n");
    ft_memcpy(dest2, src, i);
	printf("%s\n", dest2);
	return (0);
}
*/