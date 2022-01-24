/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:51:33 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/02 13:27:43 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	ret;

	i = 0;
	ret = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0' && s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			ret++;
			i++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (ret);
}
