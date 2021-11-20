/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:22:30 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/20 14:28:59 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wordcnt(char const *s, char c)
{
	unsigned int	word_cnt;

	word_cnt = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		while (*s != c && *s != '\0')
			s++;
		if (*(s - 1) != c)
			word_cnt++;
	}
	return (word_cnt);
}

static void	ft_putstr(char const *s, unsigned int save_p, \
		unsigned int idx, char *splited)
{
	while (save_p < idx)
		*splited++ = s[save_p++];
	*splited = '\0';
}

char	**ft_split(char const *s, char c)
{
	char			**splited;
	unsigned int	str_idx;
	unsigned int	list_idx;
	unsigned int	save_p;

	splited = (char **)malloc(sizeof(char *) * (ft_wordcnt(s, c) + 1));
	if (splited == NULL)
		return (NULL);
	str_idx = 0;
	list_idx = 0;
	while (s[str_idx] != '\0' && list_idx < ft_wordcnt(s, c))
	{
		while (s[str_idx] == c)
			str_idx++;
		save_p = str_idx;
		while (s[str_idx] != c && s[str_idx] != '\0')
			str_idx++;
		splited[list_idx] = (char *)malloc(str_idx - save_p + 1);
		if (splited[list_idx] == NULL)
			return (NULL);
		ft_putstr(s, save_p, str_idx, splited[list_idx++]);
	}
	splited[list_idx] = NULL;
	return (splited);
}
