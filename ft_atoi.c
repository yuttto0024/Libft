/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuonishi <yuonishi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:52:15 by yuonishi          #+#    #+#             */
/*   Updated: 2025/10/25 12:12:41 by yuonishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	long	result;
	size_t	i;
	int		sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{	
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	if (result * sign > 2147483647)
		return (2147483647);
	if (result * sign < -2147483648)
		return (-2147483648);
	return (int)(result * sign);
}

int	main(void)
{
	char	test[] = "-2147483648";
	printf("%d", atoi(test));
}