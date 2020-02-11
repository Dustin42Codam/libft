/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_malloc_wrap.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/10 18:46:05 by dkrecisz       #+#    #+#                */
/*   Updated: 2020/02/10 18:46:30 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_malloc_wrap(void *dest, size_t len)
{
        dest = malloc(len);
        return (dest);
}
