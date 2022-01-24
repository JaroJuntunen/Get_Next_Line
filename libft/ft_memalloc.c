/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mamalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:34:05 by jjuntune          #+#    #+#             */
/*   Updated: 2021/11/18 14:40:54 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*newmem;

	newmem = (char *)malloc(sizeof(char) * size);
	if (!newmem)
		return (NULL);
	ft_bzero(newmem, size);
	return (newmem);
}
