/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultoa_base.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 06:55:28 by dkrecisz      #+#    #+#                 */
/*   Updated: 2020/06/05 21:04:19 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(unsigned long n, int base)
{
	int i;

	i = 0;
	while (n >= 1)
	{
		n /= base;
		i++;
	}
	return (i);
}

char		*ft_ultoa_base(unsigned long value, int base)
{
	unsigned long	n;
	char			*s;
	int				i;

	i = 0;
	s = NULL;
	n = value;
	i += get_len(n, base);
	if (!(ft_malloc_wrap(s, i + 1)))
		return (NULL);
	s[i] = '\0';
	while (i >= 0)
	{
		i--;
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'a' - 10;
		n /= base;
	}
	return (s);
}
