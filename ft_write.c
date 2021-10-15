/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_write.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/15 22:22:34 by dkrecisz      #+#    #+#                 */
/*   Updated: 2021/10/15 22:27:59 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

ssize_t	ft_write(int fd, const void *buf, size_t count)
{
	ssize_t	write_ret;

	write_ret = write(fd, buf, count);
	if (write_ret == -1 && errno)
		exit(errno);
	return (write_ret);
}
