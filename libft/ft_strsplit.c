/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:21:35 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/13 12:47:32 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_strsplitfil(char **ret, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	wc;

	wc = ft_wordcount(s, c);
	i = 0;
	j = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (j < wc)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			ret[j][len++] = s[i++];
		if (s[i] == c || s[i] == '\0')
		{
			ret[j++][len] = '\0';
			len = 0;
		}
	}
	ret[j] = NULL;
	return (ret);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	ret = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!ret || s == NULL)
		return (NULL);
	while (j < ft_wordcount(s, c))
	{
		if ((i != 0 && s[i] == c && s[i - 1] != c) || s[i] == '\0')
		{
			ret[j] = (char *)malloc(sizeof(char) * (len + 1));
			if (!ret[j++])
				return (ft_arrdel(ret));
			len = 0;
		}
		else if (s[i] != '\0' && s[i] != c)
			len++;
		i++;
	}
	return (ft_strsplitfil(ret, s, c));
}
