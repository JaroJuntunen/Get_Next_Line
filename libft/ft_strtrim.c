/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:55:42 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/09 22:43:43 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	size_t	i;
	size_t	memneed;
	size_t	j;

	if (s == NULL)
		return (NULL);
	j = 0;
	i = 0;
	memneed = (ft_strlen(s) - 1);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ))
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	while (s[memneed] == ' ' || s[memneed] == '\t' || s[memneed] == '\n')
		memneed--;
	memneed = (memneed - i);
	new = (char *)malloc(sizeof(char) * (memneed + 2));
	if (!new)
		return (NULL);
	while (s[i] != '\0' && j <= memneed)
		new[j++] = s[i++];
	new[j] = '\0';
	return (new);
}
