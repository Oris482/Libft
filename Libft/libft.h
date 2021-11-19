/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaesjeon <jaesjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:17:29 by jaesjeon          #+#    #+#             */
/*   Updated: 2021/11/19 11:50:02 by jaesjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

size_t	ft_strlen(const char *s);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

void	ft_bzero(void *s, size_t n);

void	*ft_memset(void *b, int c, size_t len);

int		ft_atoi(const char *str);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void	*dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s1);

#endif