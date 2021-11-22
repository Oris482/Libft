/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:49:58 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/22 17:19:09 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	if (dst == 0 && src == 0)
		return (0);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (const unsigned char *)src;
	if (tmp_dst > tmp_src)
	{
		tmp_dst += len;
		tmp_src += len;
		while (len-- > 0)
			*--tmp_dst = *--tmp_src;
	}
	else
		while (len-- > 0)
			*tmp_dst++ = *tmp_src++;
	return (dst);
}
