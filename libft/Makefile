# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 15:22:29 by pdecrat           #+#    #+#              #
#    Updated: 2015/02/23 16:24:10 by pdecrat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Werror -Wextra -Wall

SRC = 		ft_memalloc.c \
			get_next_line.c \
			ft_memdel.c \
			ft_strchri.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_strclr.c \
			ft_strdel.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strnew.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_strdup.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isspace.c \
			ft_isupper.c \
			ft_islower.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strsplit.c \
			ft_countword.c \
			ft_strmapi.c \
			ft_isneg.c \
			ft_countnb.c \
			ft_itoa.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstcpyone.c \
			ft_lstcpy.c \
			ft_lstmap.c \
			ft_lstfreeone.c \
			ft_strdel_and_join.c \
			ft_strdel_and_sub.c \
			ft_strdel_and_dup.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) -c $(SRC) -I.
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean 
	rm -rf $(NAME)

re : fclean all
