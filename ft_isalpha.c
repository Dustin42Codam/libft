/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:20:09 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/10/29 12:45:53 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_islower(int c);
int ft_isupper(int c);

int	ft_isalpha(int c)
{

	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
