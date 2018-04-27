/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:58:20 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/14 19:09:14 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_boh(char *s, int dot, int hag, int n)
{
	int i;

	i = 0;
	while (s[i])
	{
		dot = 0;
		hag = 0;
		n = 0;
		while (n < 5 && s[i])
		{
			if (!(s[i] == '#' || s[i] == '.' || s[i] == '\n'))
				return (0);
			dot = (s[i] == '.') ? ++dot : dot;
			hag = (s[i] == '#') ? ++hag : hag;
			n = (s[i] == '\n') ? ++n : n;
			if (s[i] == '\n' && n != 5)
				if (!((4 * n) == (dot + hag)))
					return (0);
			i++;
		}
		if (!(dot == 12 && hag == 4))
			return (0);
	}
	return (1);
}

int				c_elem(char *s)
{
	int dot;
	int hag;
	int n;
	int i;

	dot = 0;
	hag = 0;
	n = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
		i++;
	if (s[i] == '\0' && s[i - 1] == '\n' && s[i - 2] == '\n')
		return (0);
	return (ft_boh(s, dot, hag, n));
}

int				ft_pezzi(char *s)
{
	int n;
	int	pezzi;
	int i;

	i = 0;
	pezzi = 0;
	while (s[i])
	{
		n = 0;
		while (n < 5 && s[i])
		{
			if (s[i] == '\n')
				n++;
			i++;
		}
		pezzi++;
	}
	return (pezzi);
}
