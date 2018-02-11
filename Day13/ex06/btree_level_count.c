/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 18:52:19 by eiordach          #+#    #+#             */
/*   Updated: 2017/12/08 17:16:22 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#define MAX(a, b) ((a > b) * a + (a <= b) * b)

int	btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	return (1 + MAX(btree_level_count(root->left),
				btree_level_count(root->right)));
}
