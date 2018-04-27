/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <cfavero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:19:05 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/12 14:28:01 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# define BUF_SIZE 4096

char	*alc(char *file);
int		c_elem(char *s);
int		c_pezzi(char *s);
t_list	*ft_cut(int pezzi, char *s);
void	ft_init_solution(char *grid, int i);
t_list	*muovi(t_list *block);
int		ft_small(int pezzi);
char	*ft_final(t_list *block, int b);
int		ft_put(t_list *block, char *grid, int i, int y);
int		ft_fill_grid(t_list *block, char **grid, int y);
void	reset_tetriminos(char *tetriminos);
int		ft_pezzi(char *s);
#endif
