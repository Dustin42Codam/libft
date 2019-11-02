/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 16:28:43 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 16:28:47 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 19:05:05 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 14:01:55 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen(s);
	ptr = (char*)s;
	if (c == '\0')
		return (ptr + len);
	while (len)
	{
		if (ptr[len] == c)
			return (&ptr[len]);
		len--;
	}
	if (ptr[len] == c)
		return (&ptr[len]);
	return (NULL);
}
