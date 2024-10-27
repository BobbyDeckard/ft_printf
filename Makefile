# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 12:33:45 by imeulema          #+#    #+#              #
#    Updated: 2024/10/25 13:10:08 by imeulema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wextra -Wall -Werror -g
AR = ar
ARFLAGS = -cr
RM = rm
RMFLAGS = -f
SRCS = ft_printf.c \
       srcs/address_conversion.c \
	   srcs/char_conversion.c \
	   srcs/dec_nbr_conversion.c \
	   srcs/hex_lo_conversion.c \
	   srcs/hex_up_conversion.c \
	   srcs/string_conversion.c \
	   srcs/uns_nbr_conversion.c
OBJS = $(SRCS:.c=.o)
HEADERS = incl/ft_printf.h
LIBRARY = libft/libft.a
MAKE = make

all: $(LIBRARY) $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(LIBRARY) $?
	cp $(LIBRARY) $(NAME)

%.o: %.c $(HEADERS) $(LIBRARY)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBRARY):
	cd libft && $(MAKE)

clean:
	$(RM) $(RMFLAGS) $(OBJS)
	cd libft && $(MAKE) clean

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)
	cd libft && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
