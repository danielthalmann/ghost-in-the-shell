# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 10:12:36 by dthalman          #+#    #+#              #
#    Updated: 2022/03/06 09:03:39 by dthalman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILE ###
RM         = rm -rf
CC         = gcc
CDEBUG     = -g3 -fsanitize=address
CFLAGS     = -Werror -Wextra -Wall
LDFLAGS    = 
CLIBS      = 
NORM       = norminette
AR         = ar -rcs

### FILES ###
NAME       = libparser.a
INCS_DIR   = -I ../libft -I ./inc -I ../incs
SRCS_DIR   = ./srcs
SRCS_NAME  = parser_token.c \
			 parser_readline.c \
			 parser_automaton.c \
			 parser_automaton_utils.c \
			 parser_automaton_string.c \
			 parser_automaton_string2.c \
			 parser_automaton_token.c \
			 parser_automaton_reader.c \
			 ascii.c
SRCS       = $(addprefix $(SRCS_DIR)/, $(SRCS_NAME))
OBJS       = $(SRCS:.c=.o)
LIBFT_DIR  = ../libft
LIBFT_A    = $(LIBFT_DIR)/libft.a

### TESTS ###
TEST       = tester
TESTS_DIR  = ./tests
TESTS_NAME = libparser_tester.c libparser_tester_print.c 
TESTS_INCS = -I./srcs
TESTS_LNK  = -L. -lparser -L$(LIBFT_DIR) -lft 
TESTS_SRCS = $(addprefix $(TESTS_DIR)/, $(TESTS_NAME)) 

TESTS_OBJS = $(TESTS_SRCS:.c=.o)
ifeq ($(shell uname), Linux)
	LEAKS = 
	DEBUG_FLAG = -g3 -fsanitize=leak
else
#	LEAKS = leaks -atExit --
	LEAKS = 
	DEBUG_FLAG = -g3 -fsanitize=address
endif
### RULES ###
all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) $(INCS_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

debug: CFLAGS += $(DEBUG_FLAG)
debug: $(NAME)

dev: debug

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

norm:
	$(NORM)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)
	
test: CFLAGS += $(DEBUG_FLAG)
test: LDFLAGS += $(TESTS_LNK)
test: INCS_DIR += $(TESTS_INCS)
test: $(NAME) $(LIBFT_A) $(TESTS_OBJS)
	$(CC) $(CFLAGS) $(TESTS_INCS) $(TESTS_OBJS) $(LDFLAGS) -o $(TEST)
	$(LEAKS) ./$(TEST)

.PHONY: all clean fclean re debug dev
