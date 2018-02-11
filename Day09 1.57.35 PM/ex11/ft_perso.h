/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eiordach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 13:54:32 by eiordach          #+#    #+#             */
/*   Updated: 2017/09/29 14:01:07 by eiordach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PERSO_H
# define _FT_PERSO_H
# include <string.h>
# define SAVE_AUSTIN_POWERS "ceeasta"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
#endif
