/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:48:58 by wding-ha          #+#    #+#             */
/*   Updated: 2022/03/28 19:03:24 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../libs/libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map {
	int	empty;
	int	wall;
	int	collect;
	int	out;
	int	player;
	int	length;
	int	height;
}	t_map;

#endif