#include "fifo.h"


void fifo_push(struct fifo *fifo, int elm)
{
    struct  list *l = malloc(sizeof(struct list));
    l->data = elm;
    l->next = NULL;
    if (fifo->head == NULL)
    {
        fifo->head = l;
        fifo->tail = l;
        fifo->size++;
        return;
    }

    fifo->tail->next = l;
    fifo->tail = l;
    fifo->size++;
}



