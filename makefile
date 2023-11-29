CFLAG=-Wall -pedantic -Werror -Wextra -std=gnu89

all:
	gcc $(CFLAG) *.c -o a

clean:
	rm -f a
