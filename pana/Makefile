# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 09:04:25 by cortiz-s          #+#    #+#              #
#    Updated: 2022/05/09 17:09:54 by cortiz-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c ft_isalpha.c ft_atoi.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	ft_strrchr.c ft_tolower.c ft_toupper.c ft_bzero.c ft_memcpy.c ft_memcmp.c \
	ft_memchr.c ft_memset.c ft_memmove.c ft_strnstr.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_split.c ft_itoa.c  

OBJS =${SRCS:.c=.o} 

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
	ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstmap_bonus.c 

BONUS_OBJS = ${BONUS:.c=.o}	

CC = gcc

RM = rm -f

CFLAGS= -Wall -Werror -Wextra 

all: $(NAME) 

$(NAME): 
	${CC} -c ${CFLAGS} ${SRCS} ${BONUS}
	ar rs ${NAME} ${OBJS} 

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}	

re: fclean all

bonus: ${OBJS} ${BONUS_OBJS}
	ar rs ${NAME} ${OBJS} ${BONUS_OBJS}

.PHONY: all clean fclean re bonus