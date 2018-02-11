/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omircea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:02:23 by omircea           #+#    #+#             */
/*   Updated: 2017/09/29 14:06:39 by omircea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int max;

	max = tab[0];
	i = 1;
	while (i < length)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}