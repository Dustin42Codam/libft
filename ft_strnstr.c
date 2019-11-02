/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 17:19:04 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/01 11:43:15 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*haystackptr;

	i = 0;
	haystackptr = (char*)haystack;
	if (needle[0] == '\0')
		return (haystackptr);
	while (haystackptr[i] != '\0' && len)
	{
		j = 0;
		while (haystackptr[i + j] == needle[j] && len)
		{
			if (needle[j + 1] == '\0')
				return (&haystackptr[i]);
			len--;
			j++;
		}
		i++;
		len--;
	}
	return (0);
}
