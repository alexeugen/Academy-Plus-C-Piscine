/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:52:04 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/29 13:32:06 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_h(int h)
{
	if (h == 0 || h == 24)
	{
		printf("12.00 A.M.");
	}
	else if (h < 12)
	{
		printf("%d", h);
		printf(".00 A.M.");
	}
	else if (h == 12)
		printf("12.00 P.M.");
	else if (h == 25)
		printf("1.00 A.M.");
	else
	{
		printf("%d", h % 12);
		printf(".00 P.M.");
	}
}

void	ft_takes_place(int hour)
{
	int hour2;

	hour2 = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	print_h(hour);
	printf(" AND ");
	print_h(hour2);
	printf("\n");
}
