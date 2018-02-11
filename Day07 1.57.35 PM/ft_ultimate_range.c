/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 22:21:46 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/21 22:26:10 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *str;
	int i;

	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	i = 0;
	str = (int *)malloc(sizeof(*str) * (max - min));
	while (max > min)
	{
		str[i] = min;
		i++;
		min++;
	}
	*range = str;
	return (i);
}
