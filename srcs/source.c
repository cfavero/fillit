/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:13:48 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/15 15:41:25 by mriccard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*alc(char *file)
{
	int		fd;
	int		size;
	char	*str;

	if (!file)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(*str) * (BUF_SIZE + 1))))
		return (NULL);
	if ((fd = open(file, O_RDONLY)) != -1)
	{
		size = read(fd, str, BUF_SIZE);
		str[size] = '\0';
	}
	if (close(fd) == -1)
		return (NULL);
	return (str);
}
