/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 21:01:04 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/27 21:21:22 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "files.h"

int	main(int ac, char **av)
{
	int fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		ft_display_file(fd);
		close(fd);
	}
	else
	{
		if (ac > 2)
			write(2, "Too many arguments.\n", 20);
		else
			write(2, "File name missing.\n", 20);
	}
	return (0);
}
