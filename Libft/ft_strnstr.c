/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:56:46 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/19 11:20:16 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(const char *haystack, const char *needle)
{
	while (*needle != '\0')
	{
		if (*haystack != *needle)
			break ;
		haystack++;
		needle++;
	}
	if (*needle == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cnt;
	int		is_finished;

	cnt = 0;
	is_finished = 0;
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0' && cnt < len)
	{
		if (*haystack == *needle)
		{
			if (ft_cmp(haystack, needle))
			{
				is_finished = 1;
				break ;
			}
		}
		haystack++;
		cnt++;
	}
	if (is_finished == 1)
		return (haystack);
	else
		return (0);
}
