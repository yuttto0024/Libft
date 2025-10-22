/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:38:31 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/22 20:32:02 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = '0';
	j = '9';
	k = '/';
	printf("---isdigit---\n");
	l = isdigit(i);
	printf("i:%d\n", l);
	l = isdigit(j);
	printf("j:%d\n", l);
	l = isdigit(k);
	printf("k:%d\n", l);

	printf("---ft_isdigit---\n");
	l = ft_isdigit(i);
	printf("i:%d\n", l);
	l = ft_isdigit(j);
	printf("j:%d\n", l);
	l = ft_isdigit(k);
	printf("k:%d\n", l);
}
*/
