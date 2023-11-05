#include "fifo.h"

struct fifo *fifo_init(void)
{
    struct fifo *fifo = malloc(sizeof(struct fifo));
    fifo->head = NULL;
    fifo->tail = NULL;
    fifo->size = 0;
    return fifo;
}

