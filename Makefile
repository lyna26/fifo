CC=gcc
CFLAGS= -Wall -Wextra -Werror -std=c99 -pedantic -fsanitize=address -I./src -g
SRC= fifo_init.c fifo_size.c fifo_push.c fifo_pop.c fifo_clear.c  fifo_head.c fifo_destroy.c  fifo_print.c
LIB=libfifo.a
OBJ=${SRC:.c=.o}


library:$(LIB)

clean:
	$(RM) $(OBJ) $(LIB)

$(LIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

.PHONY: library clean


