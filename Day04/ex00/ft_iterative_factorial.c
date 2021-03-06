/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 12:04:21 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/17 14:25:07 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		x;

	i = 2;
	x = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (i <= nb)
		x *= i++;
	return (x);
}
