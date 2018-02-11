/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:01:02 by eiordach          #+#    #+#             */
/*   Updated: 2017/12/08 17:17:19 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *newnode;

	newnode = (t_btree*)malloc(sizeof(t_btree));
	newnode->item = item;
	newnode->left = 0;
	newnode->right = 0;
	return (newnode);
}
