/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 06:55:28 by dkrecisz      #+#    #+#                 */
/*   Updated: 2020/09/08 20:26:47 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

static char	*init_string(int base, int i, int sign, long n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	while (i)
	{
		i--;
		if (sign == -1 && i == 0)
		{
			str[0] = '-';
			return (str);
		}
		str[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	return (str);
}

char		*ft_itoa_base(int value, int base)
{
	int		i;
	int		sign;
	long	n;

	sign = (value < 0) ? -1 : 1;
	n = (value < 0) ? -(long)value : value;
	i = (sign == -1 || value == 0) ? 1 : 0;
	while (n)
	{
		n /= base;
		i++;
	}
	n = (value < 0) ? -(long)value : value;
	return (init_string(base, i, sign, n));
}
