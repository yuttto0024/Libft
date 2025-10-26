/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:29:32 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/26 11:49:56 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_is_set()
{

}

char	*ft_strchr(char const *s, char const *set, int t)
{

}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	trim_len;
	size_t	s1_len;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;

	s1_len = ft_strlen;
	i = 0;
	while (i < s1_len)
	{
		if (s[i] != c)
			start = &s[i];
		i++;
	}
	while (s1len > 0)
	{
		if (s[s1_len] != c)
			end = &s[s1_len];
		s1_len--;
	}
	trim_len = end - start + 1;
	trim = (char *)malloc(trim_len);
	if (trim == NULL)
		return (NULL);
	while (trim_len > j)
	{
		trim[j] = s1[start + j]; 
		j++;
	}
	return (trim);
}