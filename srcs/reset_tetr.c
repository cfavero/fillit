/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_tetr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:26:48 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/07 17:45:15 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	reset_tetriminos(char *tetriminos)
{
	int x;

	x = 0;
	while (tetriminos[x])
	{
		if (tetriminos[x] >= 'A' && tetriminos[x] <= 'Z')
			tetriminos[x] += 32;
		x++;
	}
}
