/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:36:51 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/10/29 15:38:23 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
