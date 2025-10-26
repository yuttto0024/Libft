/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:31:32 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/26 14:50:43 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "Happy new year";
	char	*result;
	int		search;
	int		deference;

	search = 'y';
	printf("---strrchr---\n");
	result = strrchr(str, search);
	printf("Address: %p\n", result);
	printf("---ft_strrchr---\n");
	result = ft_strrchr(str, search);
	printf("Address: %p\n", result);
	deference = strrchr(str, search) - ft_strrchr(str, search);
	printf("deference: %d\n", deference);
}
*/