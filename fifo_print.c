#include "fifo.h"

void fifo_print_list(const struct list *fifo_head, const struct fifo *fifo)
{
    if (fifo_head == NULL)
    {
        printf("\n");
        return;
    }
    if ( fifo_head->next == NULL)
    {
        printf("%d", fifo_head->data);
        printf("\n");
        return;
    }
    printf("%d-", fifo_head->data);
    fifo_print_list(fifo_head->next, fifo);
}

void fifo_print(const struct fifo *fifo)
{
    fifo_print_list(fifo->head, fifo);
}
