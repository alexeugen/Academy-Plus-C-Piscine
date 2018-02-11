/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 21:12:06 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/27 21:26:23 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>

int		ft_atoi(char *str)
{
	int	ret;
	int	sign;

	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	ret = 0;
	while (*str && ('0' <= *str && *str <= '9'))
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret * sign);
}

int		ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

void	write_error(char *str)
{
	write(2, str, ft_strlen(str));
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
