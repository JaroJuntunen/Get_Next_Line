/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:25:57 by jjuntune          #+#    #+#             */
/*   Updated: 2022/01/10 15:21:11 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		length;
	char	*newstr;

	length = 0;
	while (src[length] != '\0')
		length++;
	newstr = (char *)malloc((length + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	length = 0;
	while (src[length] != '\0')
	{
		newstr[length] = src[length];
		length++;
	}
	newstr[length] = '\0';
	return (newstr);
}
