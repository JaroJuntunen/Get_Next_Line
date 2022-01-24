/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:18:21 by jjuntune          #+#    #+#             */
/*   Updated: 2021/11/25 15:59:43 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (((int) NULL));
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
