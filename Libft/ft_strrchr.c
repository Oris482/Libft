/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:14:26 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/19 17:12:16 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cnt;

	cnt = 0;
	while (*s++ != '\0')
		cnt++;
	s--;
	if (c == '\0')
		return ((char *)s);
	while (cnt-- > 0)
		if (*--s == c)
			return ((char *)s);
	return (0);
}
