/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:37:43 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/13 12:47:08 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;

	newstr = (char *)malloc(sizeof(char) * (size + 1));
	if (!newstr)
		return (NULL);
	ft_bzero(newstr, (size + 1));
	return (newstr);
}
