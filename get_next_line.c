/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:09:43 by jjuntune          #+#    #+#             */
/*   Updated: 2022/01/11 14:12:33 by jjuntune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_readmore(const int fd, char *remnant)
{
	ssize_t	i;
	char	*temp;
	char	buff[BUFF_SIZE + 1];

	while (fd >= 0)
	{
		i = read(fd, buff, BUFF_SIZE);
		if (i == -1)
			return (NULL);
		buff[i] = '\0';
		if (remnant != NULL && i != 0)
		{
			if (ft_strmove(&temp, &remnant) == -1)
				return (NULL);
			remnant = ft_strjoin(temp, buff);
			if (remnant == NULL)
				return (NULL);
			ft_strdel(&temp);
		}
		else if (remnant == NULL)
			remnant = ft_strdup(buff);
		if (i == 0 || ft_isthere(remnant, '\n') == 1)
			return (remnant);
	}
	return (NULL);
}

static char	*ft_find_line(char *src)
{
	size_t	i;
	char	*newstr;

	i = 0;
	while (src[i] != '\n' && src[i] != '\0')
		i++;
	newstr = ft_strnew(i + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strncpy(newstr, src, i);
	newstr[i] = '\0';
	return (newstr);
}

int	get_next_line(const int fd, char **line)
{
	static char	*remnant[FD_MAX + 1];
	char		*temp;

	if (fd > FD_MAX || fd < 0 || !line)
		return (-1);
	if (ft_isthere(remnant[fd], '\n') == 0)
	{
		temp = ft_readmore(fd, remnant[fd]);
		if (temp == NULL)
			return (-1);
		if (ft_strmove(&remnant[fd], &temp) == -1)
			return (-1);
	}
	if (remnant[fd][0] != '\0')
	{
		*line = ft_find_line(remnant[fd]);
		if (line == NULL || (ft_strmove(&temp, &remnant[fd]) == -1))
			return (-1);
		if (ft_isthere(temp, '\n') == 1)
			remnant[fd] = ft_strdup((ft_strchr(temp, '\n') + 1));
		ft_strdel(&temp);
		return (1);
	}
	return (0);
}
