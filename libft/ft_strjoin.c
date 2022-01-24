/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:38:09 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/09 22:13:19 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1len;
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	s1len = ft_strlen(s1);
	new = (char *)malloc(sizeof(char) * (s1len + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[i - s1len] != '\0')
	{
		new[i] = s2[i - s1len];
		i++;
	}
	new[i] = '\0';
	return (new);
}
