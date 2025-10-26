#include <stdio.h>
#include <stdlib.h>
#include <libht.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*p;
	size_t	s1_len;
	size_t	start;
	size_t	end;
	size_t	trim_len;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
	{
		s1_len = ft_strlen(s1);
		trim = (char *)malloc(s1_len + 1);
		if (trim == NULL)
			return (NULL);
		i = 0;
		while (i < s1_len)
		{
			trim[i] = s1[i];
			i++;
		}
		trim[i] = '\0';
		return (trim);
	}
	start = 0;
	while (s1[start])
	{
		p = ft_strchr(set, s1[start]);
		if (p == NULL)
			break;
		start++;
	}
	s1_len = ft_strlen(s1);
	if (start == s1_len)
	{
		trim = (char *)malloc(1);
		trim[0] = '\0';
		return (trim); 
	}
	end = s1_len - 1;
	while (end > start)
	{
		p = ft_strchr(set, s1[end]);
		if (p == NULL)
			break;	
		end--;
	}
	trim_len = end - start + 1;
	trim = (char *)malloc(trim_len + 1);
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (trim_len > i)
	{
		trim[i] = s1[start + i]; 
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

int	main(void)
{
	char	s1[] = "-abHappyaab";
	char	set[] = "ab-";
	char	*trim;

	trim = ft_strtrim(s1, set);
	printf("%s", trim);
}