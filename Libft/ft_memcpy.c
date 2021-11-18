/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:42:37 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/18 20:49:09 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		tmp_dst;
	const unsigned char	tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n-- > 0)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
