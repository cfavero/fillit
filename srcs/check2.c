		/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:36:44 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/02 16:30:30 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		c_pezzi(char *s)
{
	int i;
	int count;
	int n;

	i = 0;
	while (s[i])
	{
		count = 0;
		n = 0;
		while (n < 5 && s[i])
		{
			if (s[i] == '#')
			{
				count = (s[i + 1] == '#') ? ++count : count;
				count = (s[i - 1] == '#') ? ++count : count;
				count = (s[i - 5] == '#' && n != 0) ? ++count : count;
				count = (s[i + 5] == '#' && n < 3) ? ++count : count;
			}
			n = (s[i] == '\n') ? ++n : n;
			i++;
		}
		if (count != 6 && count != 8)
			return (0);
	}
	return (1);
}
