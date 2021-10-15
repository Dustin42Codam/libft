/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 10:34:33 by dkrecisz      #+#    #+#                 */
/*   Updated: 2021/10/15 22:45:39 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

ssize_t	ft_putstr_fd(const char *s, int fd)
{
	if (s != NULL)
		return (ft_write(fd, s, ft_strlen(s)));
	return (0);
}
