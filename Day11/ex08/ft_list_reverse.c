/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 16:21:41 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/26 20:56:47 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = *begin_list;
	if (!a || !(a->next))
		return ;
	b = a->next;
	c = b->next;
	a->next = 0;
	b->next = a;
	while (c)
	{
		a = b;
		b = c;
		c = c->next;
		b->next = a;
	}
	*begin_list = b;
}
