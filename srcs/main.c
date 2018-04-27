/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:49:58 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/14 18:55:26 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*str;
	t_list	*block;
	int		pezzi;

	if (ac != 2)
	{
		write(1, "Usage: The program takes one parameter\n", 39);
		return (0);
	}
	str = alc(av[1]);
	if (str == NULL)
	{
		write(1, "error\n", 6);
		return (0);
	}
	pezzi = ft_pezzi(str);
	if (!(c_elem(str) == 1 && c_pezzi(str) == 1))
	{
		write(1, "error\n", 6);
		return (0);
	}
	block = ft_cut(pezzi, str);
	muovi(block);
	ft_putstr(ft_final(block, ft_small(pezzi)));
	return (0);
}
