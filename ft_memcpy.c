/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 20:00:29 by dkrecisz      #+#    #+#                 */
/*   Updated: 2020/09/08 20:26:47 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dptr;
	unsigned const char	*sptr;

	if (dst == NULL && src == NULL)
		return (NULL);
	dptr = (unsigned char *)dst;
	sptr = (unsigned const char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < n)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	else
		while (n)
		{
			n--;
			dptr[n] = sptr[n];
		}
	return (dst);
}
