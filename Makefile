NAME = ft_minishell1
FLAGS = -Werror -Wextra -Wall

SRC = ft_array_realloc.c \
	  ft_env.c \
	  ft_errorinator.c \
	  ft_exit.c \
	  ft_find_value.c \
	  ft_get_home.c \
	  ft_getenv.c \
	  ft_getvalue.c \
	  ft_make_env.c \
	  ft_minishell1.c \
	  ft_parse_cmd.c \
	  ft_process_envfunk.c \
	  ft_setenv.c \
	  ft_shlvl.c \
	  ft_tabdel.c \
	  ft_unsetenv.c \
	  ft_cd.c \
	  ft_tablen.c

INCLUDES = ft_sh1.h

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	make -C ./libft
	gcc $(FLAGS) -c $(SRC) -L ./libft/ -lft -I libft/ 	
	gcc $(FLAGS) -o $(NAME) $(OBJ) $(INCLUDES) -L ./libft/ -lft -I libft/

clean :
	make -C ./libft clean
	rm -rf $(OBJ)

fclean : clean
	make -C ./libft fclean
	rm -rf $(NAME)

re : fclean all
