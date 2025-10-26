/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:25:50 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/26 14:47:08 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*p;
	size_t	i;

	if (size != 0 && (nmemb > SIZE_MAX / size))
		return (NULL);
	total_size = nmemb * size;
	p = (void *)malloc(total_size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (total_size > i)
	{
		((char *)p)[i] = '\0';
		i++;
	}
	return (p);
}

/*
int	main(void)
{
	size_t	nmemb;
	size_t	size;
	int	*p;

	p = ft_calloc(5, sizeof(int));
	size_t i = 0;
	int		all_zero = 1;
	while (i < 5)
	{
		if (p[i] != 0)
			all_zero = 0;
		printf("p[%zu] = %d\n", i, p[i]);
		i++;
	}
	if (all_zero == 1)
		printf("Successfully\n");
	else
		printf("Fault\n");
	
	free(p);
}
*/