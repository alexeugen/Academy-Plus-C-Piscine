/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 20:28:31 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/29 13:37:20 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'J')
			str[i] += 16;
		else if (str[i] > 'J' && str[i] <= 'Z')
			str[i] -= 10;
		else if (str[i] >= 'a' && str[i] <= 'j')
			str[i] += 16;
		else if (str[i] > 'j' && str[i] <= 'z')
			str[i] -= 10;
		i++;
	}
	return (str);
}
