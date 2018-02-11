/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 21:03:15 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/27 21:21:48 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "files.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_error(char *str)
{
	ft_putstr("ft_cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

int		ft_cat(int ac, char **av)
{
	int		fd;
	int		i;
	char	buff;
	char	bff[2];

	i = 1;
	if (ac == 1 || av[1][0] == '-')
		while (1)
		{
			read(0, bff, 1);
			write(1, bff, 1);
		}
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd >= 0)
			while (read(fd, &buff, 1))
				write(1, &buff, 1);
		else
			ft_error(av[i]);
		close(fd);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	ft_cat(ac, av);
	return (0);
}
