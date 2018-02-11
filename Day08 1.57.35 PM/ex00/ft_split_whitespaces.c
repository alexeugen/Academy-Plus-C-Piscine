/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 15:17:09 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/24 15:55:27 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_words(char *str)
{
	int i;
	int k;
	int q;

	i = 0;
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		k = 0;
	else
		k = 1;
	while (str[i])
	{
		q = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
			q = 1;
		}
		if (q)
			k++;
		while (str[i] != ' ' &&
				str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			i++;
	}
	return (k);
}

int		ws(char *str, int i)
{
	int k;

	k = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		i++;
		k++;
	}
	return (k);
}

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	arr = (char **)malloc(sizeof(char*) * (count_words(str) + 1));
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		arr[k] = (char *)malloc(sizeof(char) * (ws(str, i) + 1));
		j = 0;
		while (str[i] != ' ' && str[i] != '\t' &&
				str[i] != '\n' && str[i] != '\0')
			arr[k][j++] = str[i++];
		arr[k][j] = '\0';
		k++;
	}
	arr[k] = (char *)malloc(sizeof(char));
	arr[k][0] = '\0';
	return (arr);
}

int main()
{
	char **arr;
	arr=ft_split_whitespaces("                ");
	printf("%s", arr[0]);
}
