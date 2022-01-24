/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:21:26 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/09 22:41:39 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	char	retsize;

	retsize = 0;
	if (n < 0)
	{
		retsize++;
		n = (n * -1);
	}
	while (n > 9)
	{
		retsize++;
		n = (n / 10);
	}
	if (n < 10 && n >= 0)
		retsize++;
	return (retsize);
}
