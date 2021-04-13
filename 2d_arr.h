/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d_arr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:50:22 by ehande            #+#    #+#             */
/*   Updated: 2021/04/13 14:13:49 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DBL_ARR_H
# define DBL_ARR_H
# include <stdlib.h>
# include <stdio.h>
char    **new_2d();
int     add_f_line(char ***input, char *line);
int     add_l_line(char ***input, char *line);
void    free_2d(char ***input);
int     dl_f_line(char ***input);
int     dl_l_line(char ***input);
#endif