/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:09:39 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/25 21:26:57 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*dual;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (size == 0)
		return (NULL);
	dual = (char *)malloc(size + 1);
	if (dual == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dual[i] = s1[i];
		i++;
	}
	j = 0;	
	while (s2[j])
	{
		dual[i] = s2[j];
		i++;
		j++;
	}
	dual[i] = '\0';
	return (dual);
}

int	main(void)
{
	char	s1[] = "Happy";
	char	s2[] = "Halloween";
	char	*p;

	p = ft_strjoin(s1, s2);
	printf("%s", p);
}