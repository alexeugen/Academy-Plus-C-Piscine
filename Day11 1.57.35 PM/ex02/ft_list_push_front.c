/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 19:07:49 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/26 13:50:24 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = ft_create_elem(data);
	tmp->next = *(begin_list);
	*begin_list = tmp;
}
