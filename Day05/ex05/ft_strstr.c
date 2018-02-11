/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:19:38 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/19 21:04:44 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int q;

	q = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (j == ft_strlen(to_find))
		{
			return (str + i - j);
		}
		i++;
	}
	return (0);
}
