/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:04:55 by ehande            #+#    #+#             */
/*   Updated: 2021/04/15 21:31:29 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arr.h"
#include <stdio.h>
#include <unistd.h>

static int len(char *str)
{
    int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int main()
{
    char **cmd;
    
    cmd = new_2d(0);
    add_f_line()
    return(0);
}