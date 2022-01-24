/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:22:17 by jjuntune          #+#    #+#             */
/*   Updated: 2022/01/10 19:09:32 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strmove(char **dst, char **src)
{
	if (src != NULL)
	{
		*dst = ft_strdup(*src);
		if (*dst == NULL)
			return (-1);
		ft_strdel(src);
		return (0);
	}
	return (-1);
}
