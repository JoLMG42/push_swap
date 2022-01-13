# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 17:46:46 by jtaravel          #+#    #+#              #
#    Updated: 2022/01/12 18:39:43 by jtaravel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/ft_commandes2.c srcs/ft_commandes.c srcs/ft_insertion2.c \
	srcs/ft_insertion.c srcs/ft_little_sort.c srcs/ft_ope.c \
	srcs/ft_parsing.c srcs/ft_sort_five.c srcs/ft_strs_to_int.c \
	classics/ft_atoi.c classics/ft_bzero.c classics/ft_itoa.c classics/ft_strsjoin.c \
	classics/ft_split.c classics/ft_strjoin.c push_swap.c\


SRCS_BONUS =	Checker/checker2.c Checker/checker.c Checker/ft_commandes2_checker.c \
		Checker/ft_commandes_checker.c \
		classics/ft_atoi.c classics/ft_bzero.c classics/ft_itoa.c classics/ft_strsjoin.c \
		classics/ft_split.c classics/ft_strjoin.c \
		srcs/ft_parsing.c srcs/ft_sort_five.c srcs/ft_strs_to_int.c \
		srcs/ft_commandes2.c srcs/ft_commandes.c srcs/ft_insertion2.c \
		srcs/ft_insertion.c srcs/ft_little_sort.c srcs/ft_ope.c \

OBJS =	${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME =	push_swap

NAME_BONUS =	checker

CC =	gcc

RM =	rm -f

CFLAGS =	-Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
		${CC} ${OBJS} -o ${NAME}

bonus:		${OBJS_BONUS}
		${CC} ${OBJS_BONUS} -o ${NAME_BONUS}

all:		${NAME}

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
		${RM} ${NAME} ${NAME_BONUS}

re:		fclean all

.PHONY:		all clean flcean re
