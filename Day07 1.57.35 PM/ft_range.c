/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 22:13:18 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/25 16:42:14 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;

	if (min >= max)
		return (0);
	i = 0;
	str = (int *)malloc(sizeof(*str) * (max - min));
	while (max > min)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
