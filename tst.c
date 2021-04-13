/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:05:57 by ehande            #+#    #+#             */
/*   Updated: 2021/04/13 14:15:50 by ehande           ###   ########.fr       */
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

    dbl = new_2d();
    add_f_line(&dbl, get_line("a"));
    
    printf("%s\n", dbl[0]);
    printf("%s\n", dbl[1]);
    
    dl_l_line(&dbl);
    add_l_line(&dbl, get_line("a"));
    dl_f_line(&dbl);
    while(1);
    return (0);
}