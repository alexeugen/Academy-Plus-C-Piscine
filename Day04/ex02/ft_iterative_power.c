/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 13:22:50 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/17 14:24:16 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int c;

	c = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 2)
	{
		nb *= c;
		power--;
	}
	return (nb);
}
