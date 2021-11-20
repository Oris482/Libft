/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:10:06 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/20 14:00:08 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_notin(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	char	*trimed;
	int		trim_idx;

	str_len = ft_strlen(s1);
	trimed = (char *)malloc(str_len);
	if (trimed == NULL)
		return (NULL);
	trim_idx = 0;
	while (*s1 != '\0')
	{
		if (ft_notin(*s1, set))
		{
			trimed[trim_idx++] = *s1;
		}
		s1++;
	}
	trimed[trim_idx] = '\0';
	return (trimed);
}
