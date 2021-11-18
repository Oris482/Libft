/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:49:58 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/18 21:14:07 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;
	unsigned char		*cpy_src;
	size_t				safe_len;
	size_t				idx;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	safe_len = len + 1;
	idx = 0;
	while (*src != '\0' && safe_len-- > 0)
		cpy_src[idx++] = *tmp_src++;
	while (len-- > 0)
		*tmp_dst++ = *cpy_src++;
	return (dst);
}
