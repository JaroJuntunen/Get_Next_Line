/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:20:43 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/01 12:25:39 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ret;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	ret = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > size)
		ret = size + srclen;
	else
		ret = srclen + dstlen;
	while ((src)[i] != '\0' && (dstlen + i) < (size - 1) && size != 0)
	{
		dst[dstlen + i] = ((char *)src)[i];
		i++;
	}
	if (size != 0)
		dst[dstlen + i] = '\0';
	return (ret);
}
