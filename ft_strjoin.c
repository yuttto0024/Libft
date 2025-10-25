/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:09:39 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/25 21:36:12 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *str)
{
	size_t	len;

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

static void	ft_join_and_copy(char *dst, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*dual;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	dual = (char *)malloc(size + 1);
	if (dual == NULL)
		return (NULL);
	ft_join_and_copy(dual, s1, s2);
	return (dual);
}

int	main(void)
{
	char	s1[] = "Happy";
	char	s2[] = "Halloween";
	char	*p;

	p = ft_strjoin(s1, s2);
	printf("%s", p);
	free(p);
}