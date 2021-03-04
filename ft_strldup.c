/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strldup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/06 19:23:32 by dkrecisz      #+#    #+#                 */
/*   Updated: 2021/03/04 14:02:59 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strldup(const char *s1, size_t len)
{
	char	*dup;

	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s1, len + 1);
	return (dup);
}
