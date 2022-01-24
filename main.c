/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:02:52 by jjuntune          #+#    #+#             */
/*   Updated: 2022/01/12 18:26:28 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "libft/libft.h"

int main(int argc, char **argv)
{
	int i = 1;
	char *line;
	
	if (argc == 2)
	{
		int fd = open(argv[1],O_RDONLY);
		while (i > 0)
		{
			i = get_next_line(fd, &line);
			printf("return%d     |%s\n", i, line);
			ft_strdel(&line);
		}
		return (0);
	}
	if (argc == 1)
	{
		while (i > 0)
		{
			i = get_next_line(0, &line);
			printf("return%d     |%s\n", i, line);
			ft_strdel(&line);
		}
		return (0);
	}
	if (argc > 2)
	{
		int fd1 = open(argv[1],O_RDONLY);
		int fd2 = open(argv[2],O_RDONLY);
		int j = 0;

		while (j < 11)
		{
			i = get_next_line(fd1, &line);
			printf("return%d     |%s\n", i, line);
			ft_strdel(&line);
			j++;
		}
		while (i > 0)
		{
			i = get_next_line(fd2, &line);
			printf("return%d     |%s\n", i, line);
			ft_strdel(&line);
		}
		i = 1;
		while (i > 0)
		{
			i = get_next_line(fd1, &line);
			printf("return%d     |%s\n", i, line);
			ft_strdel(&line);
		}
		//system("leaks a.out");
		return (0);
	}
}
//ulimit -a, ulimit -n (nbr)(max 10240)