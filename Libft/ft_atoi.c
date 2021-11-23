/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:34:30 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/23 16:03:56 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || \
			c == ' ')
		return (1);
	else
		return (0);
}

static long	ft_putnum(long result, const char *str)
{
	while (*str > 47 && *str < 58)
	{
		result = (result << 1) + (result << 3) + (*str - 48);
		str++;
		if (result < 0)
			break ;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		isovered;

	result = 0;
	sign = 1;
	isovered = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = ft_putnum(result, str);
	if (result < 0)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	result *= sign;
	return (result);
}
