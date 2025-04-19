#variables

CC = clang
CFLAGS = -Wall -Wextra -Werror
NAME = Sully
SRC_DIR = ./
OBJ_DIR = ./obj/
SRC_FILES = Sully
SRC	= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJF = .cache_exists

#colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\n$(GREEN)$(NAME) ready!$(DEF_COLOR)"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c $(INC) | $(OBJF)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)


$(OBJF):
	@mkdir -p $(OBJ_DIR)

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -rf $(NAME) Sully_*

re : fclean all

diff : 
	diff Sully.c Sully_4.c || true
	diff Sully.c Sully_3.c || true
	diff Sully.c Sully_2.c || true
	diff Sully.c Sully_1.c || true
	diff Sully.c Sully_0.c || true
	