/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omircea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:14:46 by omircea           #+#    #+#             */
/*   Updated: 2017/09/29 14:20:44 by omircea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int nr;

	nr = 0;
	while (value)
	{
		if (value % 2)
			nr++;
		value /= 2;
	}
	return (nr);
}