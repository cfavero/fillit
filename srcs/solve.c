/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:33:13 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/12 14:28:30 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_final(t_list *block, int b)
{
	char	*grid;
	t_list	*temp;
	int		i;

	grid = (char *)malloc(sizeof(char*) * ((b * (b + 1)) + 1));
	i = 0;
	temp = block;
	while (i < (b * (b + 1)))
	{
		grid[i] = '.';
		if (i == b || (i - b) % (b + 1) == 0)
			grid[i] = '\n';
		i++;
	}
	grid[i] = '\0';
	if (ft_fill_grid(block, &grid, 0) == 0)
	{
		free(grid);
		return (ft_final(temp, b + 1));
	}
	return (grid);
}

int		ft_fill_grid(t_list *block, char **grid, int y)
{
	int		i;
	char	*sol_cpy;

	i = 0;
	if (!block)
		return (1);
	sol_cpy = ft_strdup(*grid);
	while ((*grid)[i])
	{
		if (!ft_put(block, *grid, i, y))
		{
			i++;
			continue;
		}
		if (ft_fill_grid(block->next, grid, y + 1))
		{
			free(sol_cpy);
			return (1);
		}
		free(*grid);
		*grid = ft_strdup(sol_cpy);
	}
	free(sol_cpy);
	return (0);
}
