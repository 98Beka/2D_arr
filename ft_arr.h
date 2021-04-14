/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d_arr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:50:22 by ehande            #+#    #+#             */
/*   Updated: 2021/04/14 20:58:49 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DBL_ARR_H
# define DBL_ARR_H
# include <stdlib.h>
char    **new_2d(int i);
int     add_f_line(char ***input, char *line);
int     add_l_line(char ***input, char *line);
void    free_2d(char ***input);
int     dl_f_line(char ***input);
int     dl_l_line(char ***input);
int     del_from_index(char **line, int index);
int     del_to_index(char **line, int index);
int     del_at_index(char **line, int index);
int     add_l_char(char **line, char ch);
int     add_f_char(char **line, char ch);
int     make_line(char **line, char ch);
#endif