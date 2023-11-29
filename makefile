CFLAG=-Wall -pedantic -Werror -Wextra -std=gnu89

all:
	gcc $(CFLAG) binary_print.c 0-binary_tree_node.c -o a

clean:
	rm -f a
