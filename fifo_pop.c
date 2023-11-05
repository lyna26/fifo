#include "fifo.h"

void fifo_pop(struct fifo *fifo)
{
    struct list *new_header =  fifo->head->next;
    free(fifo->head);
    fifo->head = new_header;
    fifo->size--;
}


