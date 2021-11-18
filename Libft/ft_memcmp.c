/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:38:12 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/18 20:41:44 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	tmp1;
	const unsigned char	tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (*tmp1 == *tmp2 && n > 0)
	{
		tmp1++;
		tmp2++;
		n--;
	}
	return (*tmp1 - *tmp2);
}
