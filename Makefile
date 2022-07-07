# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 16:37:51 by mthiesso          #+#    #+#              #
#    Updated: 2022/07/07 14:37:43 by mthiesso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- Sources -----------------
SRCS				=		 main.c movements.c parsing.c errors.c utils.c
LIB					=        ./libft/libft.a
LIBFT				=        $(MAKE) -C libft

# ---------------- OBJS & Sources -----------
OBJS_PUSHSWAP		=        $(SRCS:.c=.o)

# ---------------- Name && GCC --------------
NAME				=        push_swap
CC					=        gcc
CFLAGS				=        -Wall -Wextra -Werror
# ---------------- Couleurs -----------------
GREEN				=        \033[1;32m
RED					=        \033[1;31m
ENDCOLOR			=        \033[0m

# --------------- Texts ---------------------
START				=        echo "\n $(GREEN)Compilation en cours$(ENDCOLOR)\n"
COMPOK				=        echo "\n $(GREEN)Compilation OK$(ENDCOLOR)\n"
GNL_COMP			=        echo "\n $(GREEN)GNL OK$(ENDCOLOR)\n"
CLEAN_				=        echo "\n $(RED)Suppression des OBJS$(ENDCOLOR)\n"
FCLEAN_				=        echo "\n $(RED)Suppression des executables$(ENDCOLOR)\n"

# --------------- Regles --------------------
all: $(NAME)

$(NAME): start push_swap

start: 
		@$(START)
		@$(LIBFT)

push_swap: 
		@$(CC) $(SRCS) $(LIB) $(CFLAGS) -o $(NAME)
		@$(COMPOK)

clean:
		rm -rf $(OBJS_PUSHSWAP)
		cd libft && make clean
		@$(CLEAN_)

fclean: clean
		rm -rf $(NAME)
		cd libft && make fclean
		@$(FCLEAN_)
        
re: fclean all

.PHONY: all push_swap clean fclean re libft