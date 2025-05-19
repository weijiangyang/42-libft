# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: weiyang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 08:55:57 by weiyang           #+#    #+#              #
#    Updated: 2025/05/19 08:13:52 by weiyang          ###   ########.fr        #
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
BONUS_SRC = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstsize_bonus.c \
            ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

PATH_HEADER = ./

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^

$(PATH_SRC)%.o: $(PATH_SRC)%.c
	cc $(FLAG) -I$(PATH_HEADER) -c $< -o $@ 

clean: 
	rm -f $(OBJ)
bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
