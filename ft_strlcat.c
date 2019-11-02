/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 13:21:35 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 17:10:16 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 16:35:16 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 13:21:16 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	max;

	i = 0;
	j = 0;
	max = 0;
	while (dst[i] != '\0')
		i++;
	while (src[max] != '\0')
		++max;
	if (dstsize <= i)
		max += dstsize;
	else
		max += i;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';

	return (i);
}
	/*
	
	size_t total;
	size_t original;

	original = size;
	total = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + original);
	while (*src != 0 && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (total);
	return (0);
}
*/
/*
size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t max;
	size_t i;
	size_t j;

	max = 0;
	i = 0;
	j = 0;

	while (dst[i] != '\0')
		i++;
	while (src[max] != '\0')
		++max;
	if (dstsize <= i)
		max += dstsize;
	else
		max += i;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0'; 
	return (i);
	
}*/
