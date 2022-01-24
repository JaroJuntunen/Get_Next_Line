/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:38:50 by jjuntune          #+#    #+#             */
/*   Updated: 2021/12/13 12:44:09 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoafiller(int n, char *ret, int i)
{
	if (n < 0 && n > -10)
	{
		ret[i - 1] = '-';
		ret[i] = ((n * -1) + '0');
	}
	else if (n <= 9 && n >= 0)
		ret[i] = (n + '0');
	else if (n > 9 || n < -9)
	{
		ret = ft_itoafiller(n / 10, ret, i - 1);
		if (n < 0)
			ret[i] = (((n * -1) % 10) + '0');
		else
			ret[i] = ((n % 10) + '0');
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		numlen;
	char	*ret;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	numlen = ft_numlen(n);
	ret = (char *)malloc(sizeof(char) * (numlen + 1));
	if (ret == NULL)
		return (NULL);
	ret = ft_itoafiller(n, ret, (numlen - 1));
	ret[numlen] = '\0';
	return (ret);
}
