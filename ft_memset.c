/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 13:12:43 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/11/02 13:51:18 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	int		i;

	ptr = b;
	i = 0;
	while (len)
	{
		ptr[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}


