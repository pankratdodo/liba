/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plettie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:22:08 by plettie           #+#    #+#             */
/*   Updated: 2019/04/09 13:37:56 by plettie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
		c = 1;
	while (n != 0)
	{
		c++;
		n /= 10;
	}
	return (c);
}
