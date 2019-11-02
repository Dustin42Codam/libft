/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 19:53:25 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 17:51:57 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (i);
}
	/*
	if (dstsize < len)
	{
		while (dst[i] && src[i] && dstsize)
		{
			
		}
	}
	else
	{
	while (dst[i] && src[i] && dstsize)
	{
		dst[i] = src[i];
		dstsize--;
		i++;
	}
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
*/

/*
int	main()
{
	char *str= "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00];
	char buff2[0xF00];

	printf("strlcpy:\t%lu\n", strlcpy(buff1, str, 2));
	printf("ft_strlcpy:\t%lu", ft_strlcpy(buff2, str, 2));

	return (0);
}
*/
