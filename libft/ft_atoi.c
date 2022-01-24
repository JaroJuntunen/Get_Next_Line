/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:25:26 by jjuntune          #+#    #+#             */
/*   Updated: 2021/11/25 16:15:25 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	pn;
	int	r;

	pn = 1;
	i = 0;
	r = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		pn = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		r = r + (str[i] - '0');
		if (str[i + 1] <= '9' && str[i + 1] >= '0')
			r = r * 10;
		i++;
	}
	return (r * pn);
}
