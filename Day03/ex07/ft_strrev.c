/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 13:00:07 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/16 13:23:07 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strev(char *str)
{
	int n;
	int i;
	int aux;

	n = 0;
	i = 0;
	while (str[n] != '\0')
		n++;
	n--;
	while (i <= n / 2)
	{
		aux = str[i];
		str[i] = str[n - i];
		str[n - i] = aux;
		i++;
	}
	return (str);
}
