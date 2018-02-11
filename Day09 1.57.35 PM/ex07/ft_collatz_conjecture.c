/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjencture.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omircea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 11:37:11 by omircea           #+#    #+#             */
/*   Updated: 2017/09/29 11:45:55 by omircea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2)
		return (1 + ft_collatz_conjecture(base * 3 + 1));
	return (1 + ft_collatz_conjecture(base / 2));
}
