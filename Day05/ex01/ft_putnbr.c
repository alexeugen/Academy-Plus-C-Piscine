/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 20:38:21 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/19 19:55:29 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		put_in_vector(int nb, int n, char v[])
{
	while (nb > 0)
	{
		v[n] = nb % 10 + 48;
		n++;
		nb /= 10;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	char	v[100];
	int		n;
	int		q;

	n = 0;
	q = 0;
	if (nb == 0)
		ft_putchar(48);
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb++;
			q = 1;
		}
		nb *= -1;
	}
	n = put_in_vector(nb, n, v) - 1;
	while (n > 0)
		ft_putchar(v[n--]);
	if (q)
		ft_putchar(v[n--] + 1);
	else
		ft_putchar(v[n--]);
}
