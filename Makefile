C_FILES = $(wildcard *.c)
O_FILES = $(C_FILES:%.c=build/%.o)
C_FLAGS = -Wall -Werror -Wextra -lbsd
NAME = libft.a 

.PHONY: all clean fclean re
.DEFAULT: all

all: $(O_FILES)
	ar -rcs $(NAME) $^

build:
	@mkdir -p build

build/%.o: %.c | build
	cc $(C_FLAGS) -c $< -o $@

clean:
	-rm -f $(O_FILES)
	-rm -rf build

fclean: clean
	-rm -f $(NAME)

re: fclean all
