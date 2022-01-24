/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:25:02 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/09 22:56:40 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	length;
	int	i;

	i = 0;
	length = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (needle[length])
		length++;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp((char *) haystack + i, (char *) needle, length) == 0)
				return ((char *) haystack + i);
		}
		i++;
	}
	return (0);
}
