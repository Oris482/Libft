/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:34:30 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/22 21:51:04 by jaesjeon         ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
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

int	main(void)
{
	int	a;
	int	b;
	int c;
	int d;
	char *s1;
	char *s2;

	s1 = "9223372036854775809";
	s2 = "-9223372036854775810";
	a = ft_atoi(s1);
	b = ft_atoi(s2);
	printf("%d\n%d\n", a, b);
	c = atoi(s1);
	d = atoi(s2);
	printf("\n%d\n%d\n", c, d);
	if (a == c)
		printf("test success\n");
	else
		printf("fail\n");
	return (0);
}
