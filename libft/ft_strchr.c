/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:24:56 by jjuntune          #+#    #+#             */
/*   Updated: 2022/01/10 14:56:41 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != chr)
		i++;
	if (str[i] == chr)
		return ((char *) str + i);
	return (NULL);
}
