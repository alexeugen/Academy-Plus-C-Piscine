/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omircea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 11:51:21 by omircea           #+#    #+#             */
/*   Updated: 2017/09/29 13:57:25 by omircea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_to_lower(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_no_space(char *str)
{
	int		i;
	int		k;
	char	str2[256];

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			str2[k++] = str[i];
		i++;
	}
	i = 0;
	while (str2[i])
	{
		str[i] = str2[i];
		i++;
	}
	str[i] = '\0';
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_to_lower(argv[i]);
		ft_no_space(argv[i]);
		if (ft_strcmp(argv[i], "president") == 0 ||
				ft_strcmp(argv[i], "attack") == 0 ||
				ft_strcmp(argv[i], "power") == 0)
			ft_putstr("Alert!!!\n");
		i++;
	}
	return (0);
}
