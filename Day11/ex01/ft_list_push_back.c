/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:20:46 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/26 20:14:45 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list **tmp;

	tmp = begin_list;
	if (*tmp)
	{
		while ((*tmp)->next)
			tmp = &((*tmp)->next);
		(*tmp)->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
