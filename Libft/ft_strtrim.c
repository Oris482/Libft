/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:10:06 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/20 16:48:31 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isin(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	char	*trimed;
	size_t	start;
	size_t	end;

	start = 0;
	end = 1;
	str_len = ft_strlen(s1);
	while (ft_isin(s1[str_len - end], set) && str_len > end)
		if (str_len > 0)
			str_len--;
	while (ft_isin(s1[start++], set))
		if (str_len > 0)
			str_len--;
	start--;
	trimed = (char *)malloc(str_len + 1);
	if (trimed == NULL)
		return (NULL);
	if (str_len == 0)
	{
		*trimed = '\0';
		return (trimed);
	}
	ft_strlcpy(trimed, &s1[start], str_len + 1);
	return (trimed);
}
