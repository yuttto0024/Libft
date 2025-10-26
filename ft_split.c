/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:10:06 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/26 17:46:22 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libht.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
			i++;
		else
			while (s[i] != c && s[i] != '\0')
				i++;
			wc++;
	}
	return (wc);
}

static void	*free_all(char **result, size_t i)
{

}

static char	**ft_word_dup()
{

}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**p;

	if (s == NULL)
		return (NULL);
	wc = ft_word_count(s, c);
	p  = (char *)malloc(wc + 1);
	if (p == NULL)
		return (NULL);
	
}