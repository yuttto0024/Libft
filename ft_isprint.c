/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:20:21 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/22 20:32:08 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	if ((c >= '\0' && c <= 31) || c == 127)
		return (0);
	return (1);
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = '\0';
	j = '<';
	k = '!';
	printf("---isprint---\n");
	l = isprint(i);
	printf("i:%d\n", l);
	l = isprint(j);
	printf("j:%d\n", l);
	l = isprint(k);
	printf("k:%d\n", l);

	printf("---ft_isprint---\n");
	l = ft_isprint(i);
	printf("i:%d\n", l);
	l = ft_isprint(j);
	printf("j:%d\n", l);
	l = ft_isprint(k);
	printf("k:%d\n", l);
}
*/
