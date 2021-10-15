/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_unsigned_fd.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 13:39:43 by dkrecisz      #+#    #+#                 */
/*   Updated: 2021/10/15 22:46:50 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

ssize_t	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char			c;
	long long		nb;
	ssize_t			ret;

	nb = (long long)n;
	ret = 0;
	if (nb < 0)
	{
		nb *= -1;
		ret += ft_write(fd, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		ret += ft_putchar_fd(c, fd);
		return (ret);
	}
	if (nb)
	{
		ft_putnbr_fd(nb / 10, fd);
		c = nb % 10 + '0';
		ret += ft_write(fd, &c, 1);
		return (ret);
	}
	return (ret);
}
