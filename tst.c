/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:04:55 by ehande            #+#    #+#             */
/*   Updated: 2021/04/16 01:31:25 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"
#include <unistd.h>
#include <stdio.h>

char *mk_line(char ch)
{
    char *out;
    
    out = malloc(sizeof(char) * 2);
    out[1] = '\0';
    out[0] = ch;
    return(out);
}

void w(char **str)
{
    int i;
    
    i = -1;
    while(str && str[++i])
        printf("%s\n", str[i]);
}

int main()
{
    char **cmd;
    
    cmd = malloc(sizeof(char *));
    cmd[0] = NULL;
    add_f_line(&cmd, mk_line('b'));
    add_l_line(&cmd, mk_line('c'));
    add_l_line(&cmd, mk_line('d'));
    add_f_line(&cmd, mk_line('a'));
    w(cmd);
    printf("\n");
    dl_l_line(&cmd);
    dl_f_line(&cmd);
    free_2d(&cmd);
    w(cmd);
    
    
    return(0);
}