# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/07 19:07:09 by minfinga          #+#    #+#              #
#    Updated: 2024/08/07 20:31:56 by minfinga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

LIBFT_DIR = ./libs/libft
FT_PRINTF_DIR = ./libs/ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/ft_printf.a
INC = ./inc ./libs/ft_printf/include ./libs/libft
SRC_DIR = srcs/
OBJ_DIR = obj/

CC	= gcc
CFLAGS = -Wall -Werror -Wextra $(addprefix -I, $(INC))
RM = rm -rf

COMMANDS_DIR	=	$(SRC_DIR)commands/push.c \
				$(SRC_DIR)commands/rotate.c \
				$(SRC_DIR)commands/rev_rotate.c \
				$(SRC_DIR)commands/swap.c \

PUSH_SWAP_DIR	=	$(SRC_DIR)push_swap/handle_error.c \
					$(SRC_DIR)push_swap/push_swap.c \
					$(SRC_DIR)push_swap/split.c \
					$(SRC_DIR)push_swap/stack_init.c \
					$(SRC_DIR)push_swap/stack_utils.c \

SORT_DIR	=	$(SRC_DIR)sort/init_a_to_b.c \
				$(SRC_DIR)sort/init_b_to_a.c \
				$(SRC_DIR)sort/move_utils.c \
				$(SRC_DIR)sort/move.c \
				$(SRC_DIR)sort/sort_stacks.c \
				$(SRC_DIR)sort/sort_three.c \

SRCS	=	$(COMMANDS_DIR) $(PUSH_SWAP_DIR) $(SORT_DIR)

OBJ	=	$(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))


all:	$(LIBFT) $(FT_PRINTF) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(FT_PRINTF):
	@make -C $(FT_PRINTF_DIR)

$(NAME):	$(OBJ) $(LIBFT) $(FT_PRINTF)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(FT_PRINTF_DIR)

fclean: 			clean
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(FT_PRINTF_DIR)

re: 				fclean all

.PHONY: 			start all clean fclean re
