/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 22:10:54 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/19 19:09:38 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int x;
	int q;

	i = 0;
	x = 0;
	q = 0;
	while (str[i] == ' ' || str[i] == '	')
		i++;
	if ((str[i] == '+' || str[i] == '-') && is_digit(str[i + 1]))
	{
		if (str[i] == '-')
			q = 1;
		i++;
	}
	else if (!is_digit(str[i]))
		return (0);
	while (is_digit(str[i]))
		x = x * 10 + (str[i++] - 48);
	if (q)
		x *= -1;
	return (x);
}
