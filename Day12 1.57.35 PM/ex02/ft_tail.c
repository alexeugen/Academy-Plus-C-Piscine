/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 21:10:54 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/27 21:26:15 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "utils.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 409600

void	put_error(char *filename)
{
	ft_putstr("ft_tail: ");
	ft_putstr(filename);
	ft_putstr(": No such file or directory");
}

int		ft_tail(char *filename, int n)
{
	int		fd1;
	int		fd2;
	char	buf[BUF_SIZE + 1];
	int		ret;

	fd1 = open(filename, O_RDONLY);
	fd2 = open(filename, O_RDONLY);
	if (fd1 == -1 || fd2 == -1)
	{
		put_error(filename);
		return (-1);
	}
	while (n--)
		ret = read(fd1, buf, 1);
	while ((ret = read(fd1, buf, 1)) == 1)
		read(fd2, buf, 1);
	while ((ret = read(fd2, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd1);
	close(fd2);
	return (0);
}

int		ft_tail_multiple(char *filename, int n)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("ft_tail: ");
		ft_putstr(filename);
		ft_putstr(": No such file or directory");
		return (-1);
	}
	close(fd);
	ft_putstr("==> ");
	ft_putstr(filename);
	ft_putstr(" <==\n");
	return (ft_tail(filename, n));
}
