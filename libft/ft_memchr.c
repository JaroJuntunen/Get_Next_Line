/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:41:40 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/10 14:43:39 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < (n - 1) && ((unsigned char *)s)[i] != ((unsigned char)c))
		i++;
	if (((unsigned char *)s)[i] == ((unsigned char)c))
		return (((void *)s) + i);
	return (NULL);
}
