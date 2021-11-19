/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:52:12 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/19 11:19:35 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	char	*copied;
	size_t	size;
	int		idx;

	size = ft_strlen(s1);
	copied = (char *)malloc(size + 1);
	if (copied == NULL)
		return (NULL);
	idx = 0;
	while (size > idx)
		copied[idx++] = *s1++;
	copied[idx] = '\0';
	return (copied);
}
