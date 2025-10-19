/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:21:05 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/19 17:09:27 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
void	main(void)
{
	char	str[] = "Happy new year";
	char	*result;
	int		search;

	search = 'n';
	printf("---strchr---\n");
	result = strchr(str, search);
	printf("Address: %p\n", result);

	printf("---ft_strchr---\n");
	result = ft_strchr(str, search);
	printf("Address: %p\n", result);
}
*/