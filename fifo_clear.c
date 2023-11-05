#include "fifo.h"


void fifo_clear(struct fifo *fifo)
{
    while( fifo->size > 0)
    {
        fifo_pop(fifo);
    }
}



