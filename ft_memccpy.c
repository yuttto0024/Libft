/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:36:07 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/24 19:02:23 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	cp;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	cp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == cp)
			return (&d[i + 1]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char		src[] = "Happy";
	char		dest1[] = "---------";
	char		dest2[] = "---------";
	int			i;
	size_t		n;
	char		*p;

	i = 'y';
	n = 7;
	printf("---memccpy---\n");
	p = memccpy(dest1, src, i, n);
	printf("Address:%p\n", p);
	printf("%s\n", dest1);
	printf("---ft_memccpy---\n");
	p = ft_memccpy(dest2, src, i, n);
	printf("Address:%p\n", p);
	printf("%s\n", dest2);
}
*/