/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:15:33 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/09 22:18:26 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_arrdel(char **ret)
{
	size_t	i;

	i = 0;
	while (ret[i] != NULL)
	{
		free(ret[i]);
		ret[i] = NULL;
		i++;
	}
	free(ret);
	ret = NULL;
	return (ret);
}
