/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ltoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/10 18:29:59 by dkrecisz       #+#    #+#                */
/*   Updated: 2020/02/10 19:44:43 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n, int base)
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

char		*ft_ltoa_base(long value, int base)
{
	char	*s;
	long	n;
	int		sign;
	int		i;

	i = 0;
	s = NULL;
	n = (value < 0) ? -(long)value : value;
	i += get_len(n, base);
	sign = (value < 0 && base == 10) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	if (!(ft_malloc_wrap(s, i + 1)))
		return (NULL);
	s[i] = '\0';
	n = (value < 0) ? -(long)value : value;
	while (i + sign)
	{
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
		i--;
	}
	(i == 0) ? s[i] = '-' : 0;
	return (s);
}
