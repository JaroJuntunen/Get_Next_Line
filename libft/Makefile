# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjuntune <jjuntune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 13:01:51 by jjuntune          #+#    #+#              #
#    Updated: 2022/01/10 13:24:46 by jjuntune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = ft_putchar.c ft_putendl.c ft_putnbr.c ft_putstr.c ft_strchr.c
CFILES += ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncpy.c
CFILES += ft_strrchr.c ft_atoi.c ft_strncmp.c ft_strstr.c ft_isalpha.c
CFILES += ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strnstr.c
CFILES += ft_toupper.c ft_tolower.c ft_strcat.c ft_strncat.c ft_bzero.c
CFILES += ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c
CFILES += ft_memcmp.c ft_strlcat.c ft_putchar_fd.c ft_putstr_fd.c 
CFILES += ft_putendl_fd.c ft_putnbr_fd.c ft_memalloc.c ft_strnew.c
CFILES += ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c
CFILES += ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_wordcount.c
CFILES += ft_memdel.c ft_strsub.c ft_strequ.c ft_strnequ.c ft_itoa.c
CFILES += ft_arrdel.c ft_numlen.c ft_isupper.c ft_islower.c ft_isthere.c
CFILES += ft_strmove.c

OFILES = ft_putchar.o ft_putendl.o ft_putnbr.o ft_putstr.o ft_strchr.o
OFILES += ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_strncpy.o
OFILES += ft_strrchr.o ft_atoi.o ft_strncmp.o ft_strstr.o ft_isalpha.o
OFILES += ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strnstr.o
OFILES += ft_toupper.o ft_tolower.o ft_strcat.o ft_strncat.o ft_bzero.o
OFILES += ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o
OFILES += ft_memcmp.o ft_strlcat.o ft_putchar_fd.o ft_putstr_fd.o 
OFILES += ft_putendl_fd.o ft_putnbr_fd.o ft_memalloc.o ft_strnew.o
OFILES += ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o
OFILES += ft_strmapi.o ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_wordcount.o
OFILES += ft_memdel.o ft_strsub.o ft_strequ.o ft_strnequ.o ft_itoa.o
OFILES += ft_arrdel.o ft_numlen.o ft_isupper.o ft_islower.o ft_isthere.o
OFILES += ft_strmove.o

all: $(NAME) 

$(NAME): $(OFILES) 
	ar -rc $(NAME) $(OFILES)

$(OFILES):
	gcc -Wall -Wextra -Werror -c $(CFILES) -I libft.h

clean:
	rm -f $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
