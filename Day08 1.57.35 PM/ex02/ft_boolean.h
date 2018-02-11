/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:36:53 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/22 21:07:26 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H
# define _FT_BOOLEAN_H
# include <unistd.h>

# define EVEN(nbr) nbr % 2 == 0
# define EVEN_MSG "I have an even number of arguments\n"
# define ODD_MSG "I have an odd number of arguments\n"
# define SUCCESS 0
# define TRUE 1
# define FALSE 0

typedef unsigned int	t_bool;

#endif
