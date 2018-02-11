/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 20:02:30 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/26 20:29:25 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int			k;
	t_list		*tmp;

	k = 0;
	tmp = begin_list;
	while (tmp)
	{
		k++;
		tmp = tmp->next;
	}
	return (k);
}
