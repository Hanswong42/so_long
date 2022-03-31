/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:23:37 by wding-ha          #+#    #+#             */
/*   Updated: 2022/03/31 20:41:02 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int valid(t_vars vars, int i, int j)
{
	if (vars.map[i][j] == '1')
		return (0);
	if (vars.map[i][j] == 'E' && vars.col > 0)
		return (0);
	return (1);
}