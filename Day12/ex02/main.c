/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 21:11:37 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/27 21:11:48 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "ft_tail.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 4)
		return (1);
	if (argc == 4)
		ft_tail(argv[3], ft_atoi(argv[2]));
	else
	{
		i = 3;
		while (i < argc)
		{
			if (!ft_tail_multiple(argv[i], ft_atoi(argv[2])) && i < argc - 1)
				ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
