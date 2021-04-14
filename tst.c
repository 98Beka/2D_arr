/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:04:55 by ehande            #+#    #+#             */
/*   Updated: 2021/04/14 21:39:52 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"
#include <stdio.h>
#include <unistd.h>

static int len(char *str)
{
    int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int c, char **v)
{
    char *line;
    char *bf;
    (void)c;
    (void)v;
    
    line = NULL;
    bf = malloc(sizeof(char));
    while(1)
    {
        read(0, bf, 1);
        if(!make_line(&line, *bf))
            break;
    }
    write(1, line, len(line));
    while(1);
    return(0);
}