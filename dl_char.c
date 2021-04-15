/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:33:12 by ehande            #+#    #+#             */
/*   Updated: 2021/04/15 21:23:50 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"

static int len(char *str)
{
    int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int del_from_index(char **line, int index)
{
    int i;
    char *out;
    char *tmp;

    tmp = *line;
    i = index;
    if(!(out = malloc(sizeof(char) * (i + 1))))
        return (0);
    out[i] = '\0';
    while (i--)
        out[i]= tmp[i];
    free(*line);
    *line = out;
    return (1);
}

int del_to_index(char **line, int index)
{
    int i;
    char *out;
    char *tmp;

    tmp = *line;
    i = len(*line) - index;
    if(!(out = malloc(sizeof(char) * (i + 1))))
        return (0);
    out[i] = '\0';
    while (i--)
        out[i]= tmp[i + index];
    free(*line);
    *line = out;
    return (1);
}

int del_at_index(char **line, int index)
{
    int i;
    int j;
    char *out;
    char *tmp;

    tmp = *line;
    i = len(tmp);
    if(!(out = malloc(sizeof(char) * (i))))
        return (0);
    out[--i] = '\0';
    j = i;
    while (j)
        if (j == index)
            j -= 1;
        else
            out[--i] = tmp[j--];
    free(*line);
    *line = out;
    return (1);
}