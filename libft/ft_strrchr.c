/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:22:15 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/10 14:19:01 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i != 0 && str[i] != chr)
		i--;
	if (str[i] == chr)
		return ((char *)str + i);
	return (0);
}
