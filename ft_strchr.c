/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 20:13:34 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 15:39:41 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char*)s;
	if (c == '\0')
		return (ptr + ft_strlen(s));
	while (ptr[i])
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
