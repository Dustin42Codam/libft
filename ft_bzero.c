/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 12:57:45 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 13:12:33 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (n == 0)
		return ;
	i = 0;
	ptr = (char*)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
