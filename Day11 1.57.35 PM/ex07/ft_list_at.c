/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:46:57 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/26 20:51:02 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	tmp = begin_list;
	i = 1;
	while (i < nbr && tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < nbr)
		return (0);
	return (tmp);
}
