/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:14:28 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/12 14:32:00 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_where(char *block, int x, char *grid, int i)
{
	int		j;
	int		b;

	j = 0;
	b = 0;
	while (grid[b] != '\n')
		b++;
	b++;
	if (x >= 0 && x < 20 && i >= 0 && i < (b * (b - 1)))
	{
		if (block[x] >= 'a' && block[x] <= 'z' && grid[i] == '.')
		{
			block[x] -= 32;
			grid[i] = block[x];
			j++;
			j += ft_where(block, x + 1, grid, i + 1);
			j += ft_where(block, x + 5, grid, i + b);
			j += ft_where(block, x - 1, grid, i - 1);
		}
	}
	return (j);
}

int		ft_put(t_list *block, char *grid, int i, int y)
{
	int		j;
	int		x;
	char	alpha;

	x = 0;
	j = 0;
	alpha = 'A' + y;
	while (!ft_isalpha(block->content[x]))
		x++;
	if (ft_where(block->content, x, grid, i) == 4)
		return (1);
	reset_tetriminos(block->content);
	while (grid[j])
	{
		if (grid[j] == alpha)
			grid[j] = '.';
		j++;
	}
	return (0);
}
