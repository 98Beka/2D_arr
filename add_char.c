/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:41:08 by ehande            #+#    #+#             */
/*   Updated: 2021/04/14 21:30:27 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

static int len(char *str)
{
    int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int add_l_char(char **line, char ch)
{
    int i;
    char *out;
    char *tmp;

    tmp = *line;
    i = len(tmp);
    i ++;
    if(!(out = malloc(sizeof(char) * (i + 1))))
        return (0);
    out[i] = '\0';
    out[--i] = ch;
    while (tmp[--i])
        out[i] = tmp[i];
    free(*line);
    *line = out;
    return (1);
}

int add_f_char(char **line, char ch)
{
    int i;
    char *out;
    char *tmp;

    tmp = *line;
    i = len(tmp);
    i ++;
    if(!(out = malloc(sizeof(char) * (i + 1))))
        return (0);
    out[i] = '\0';
    --i;
    while (tmp[--i])
        out[i + 1] = tmp[i];
    out[0] = ch;
    free(*line);
    *line = out;
    return (1);
}