/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 11:32:19 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/26 20:46:24 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_front(t_list **begin, void *data)
{
	t_list *tmp;

	tmp = ft_create_elem(data);
	tmp->next = *(begin);
	*begin = tmp;
}

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	int		i;

	tmp = ft_create_elem(av[0]);
	i = 1;
	while (i < ac)
		ft_list_push_front(&tmp, av[i++]);
	return (tmp);
}
