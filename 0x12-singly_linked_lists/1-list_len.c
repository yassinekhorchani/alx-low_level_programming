#include <stdlib.h>
#include "lists.h"

/**
 * function that return Return the  number of elements in h
 */
size_t list_len(const list_t *h)
{
 size_t s = 0;

 while (h)
 {
 s++;
 h = h->next;
 }
 return (s);
}

