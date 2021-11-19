/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:55:59 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/19 11:19:42 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(const char *s)
{
	size_t	idx;

	idx = 0;
	while (*s++ != '\0')
		idx++;
	return (idx);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			dst_len;
	size_t			src_len;
	unsigned int	idx;

	dst_len = ft_strlen((const)dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (dst_len + src_len);
	idx = 0;
	while (*dst++ != '\0')
		idx++;
	while (++idx < dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}
