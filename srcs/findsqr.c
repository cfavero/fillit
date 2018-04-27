/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findsqr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 17:03:38 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/14 19:33:13 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_small(int pezzi)
{
	int nb;
	int j;
	int k;
	int a;
	int b;

	nb = pezzi * 4;
	a = 0;
	b = 1;
	j = 0;
	while (j < 150)
	{
		j = a * a;
		k = b * b;
		if (j < nb && nb <= k)
			return (b);
		a++;
		b++;
	}
	return (0);
}
