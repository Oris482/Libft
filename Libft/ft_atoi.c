/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:34:30 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/17 21:48:53 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str != 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		result = (result * 10) + (*str - 48);
		str++;
	}
	result *= sign;
	return (result);
}

#include <stdio.h>

int main(void)
{
	const char	*c = "  -123";
	printf("-123 = %d", ft_atoi(c));
	return (0);
}
