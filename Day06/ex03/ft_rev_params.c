/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:11:11 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/20 22:12:28 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i])
			ft_putchar(argv[argc - 1][i++]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
