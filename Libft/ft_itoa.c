/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:28:13 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/22 16:25:59 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digit(int n)
{
	size_t	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static void	ft_putnum(char *result, int n, size_t digit, size_t end_p)
{
	while (digit >= end_p)
	{
		result[digit] = (n % 10) + 48;
		n /= 10;
		if (digit == 0)
			break ;
		digit--;
	}
}

char	*ft_itoa(int n)
{
	size_t	digit;
	size_t	end_p;
	char	*result;
	char	*min;

	min = "-2147483648";
	digit = ft_digit(n);
	if (n < 0)
		digit++;
	end_p = 0;
	result = (char *)malloc(digit + 1);
	if (result == NULL)
		return (NULL);
	result[digit--] = '\0';
	if (n < 0)
	{
		end_p = 1;
		result[0] = '-';
		if (n == -2147483648)
			return (min);
		n *= (-1);
	}
	ft_putnum(result, n, digit, end_p);
	return (result);
}
