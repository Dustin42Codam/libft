/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:56:23 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/10/28 17:56:09 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
