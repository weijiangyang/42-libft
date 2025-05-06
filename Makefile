# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: weiyang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 08:55:57 by weiyang           #+#    #+#              #
#    Updated: 2025/05/06 09:07:51 by weiyang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
PATH_SRC = ./
SRC = ft_atoi.c ft_isascii.c    ft_memcmp.c     ft_putendl_fd.c ft_strdup.c     ft_strlen.c     ft_strtrim.c \
      ft_bzero.c      ft_isdigit.c    ft_memcpy.c     ft_putnbr_fd.c  ft_striteri.c   ft_strmapi.c    ft_substr.c \
      ft_calloc.c     ft_isprint.c    ft_memmove.c    ft_putstr_fd.c  ft_strjoin.c    ft_strncmp.c    ft_tolower.c \
      ft_isalnum.c    ft_itoa.c       ft_memset.c     ft_split.c      ft_strlcat.c    ft_strnstr.c    ft_toupper.c \
      ft_isalpha.c    ft_memchr.c     ft_putchar_fd.c ft_strchr.c     ft_strlcpy.c    ft_strrchr.c

OBJ = $(addprefix $(PATH_SRC), $(SRC:.c=.o))

PATH_HEADER = ./

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^

$(PATH_SRC)%.o: $(PATH_SRC)%.c
	cc $(FLAG) -I$(PATH_HEADER) -c $< -o $@ 

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all



