/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:22:53 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/09 22:56:22 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	length;
	size_t	i;

	i = 0;
	length = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[length])
		length++;
	while (haystack[i] != '\0' && (i < len))
	{
		if (haystack[i] == needle[0] && (i + length) <= len)
		{
			if (ft_strncmp((char *) haystack + i, (char *) needle, length) == 0)
				return ((char *) haystack + i);
		}
		i++;
	}
	return (0);
}
