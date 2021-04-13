/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:05:57 by ehande            #+#    #+#             */
/*   Updated: 2021/04/13 15:15:50 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "2d_arr.h"

char *get_line(char *line)
{
    char *out;
    out = malloc(sizeof(char) * 2);
    out[1] = '\0';
    out[0] = line[0];
    return(out);
}

int main(void)
{
    char    **dbl;
    char    *line;
    int i;

    i = 0;
    dbl = new_2d(20);
    
    while(dbl[i] == NULL)
        printf("%s\n", dbl[i++]);
    return (0);
}