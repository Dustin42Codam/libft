/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultoa_base.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 06:55:28 by dkrecisz       #+#    #+#                */
/*   Updated: 2020/02/09 07:30:10 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_ultoa_base(unsigned long value, int base)
{
	unsigned long	n;
	char			*s;
	int				i;

	i = 0;
	n = value;
	while (n > 0)
	{
		n /= base;
		i++;
	}
	n = value;
	s = (char*)malloc(sizeof(char) * i + 1);
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	while (i >= 0)
	{
		i--;
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	return (s);
}
