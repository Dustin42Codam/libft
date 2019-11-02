/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*    libft.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:10:15 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 13:17:45 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include	<stdlib.h>

int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_atoi(const char *str);
int			ft_strlen(const char *s);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);

#endif
