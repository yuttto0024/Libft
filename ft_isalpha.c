/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:31:58 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/19 10:53:09 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/*
void	main(void)
{
	int	i;
	int	j;
	int k;
	int	l;

	i = 'A';
	j = 'z';
	k = '/';
	printf("---isalpha---\n");
	l = isalpha(i);
	printf("i:%d\n", l);
	l = isalpha(j);
	printf("j:%d\n", l);
	l = isalpha(k);
	printf("k:%d\n", l);

	printf("---ft_isalpha---\n");
	l = ft_isalpha(i);
	printf("i:%d\n", l);
	l = ft_isalpha(j);
	printf("j:%d\n", l);
	l = ft_isalpha(k);
	printf("k:%d\n", l);
}
*/
