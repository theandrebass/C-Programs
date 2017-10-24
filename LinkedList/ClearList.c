#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

extern node *head;

void clearList()
{
  node *curr = head;
  
  while(curr)
  {
  free(curr);
  curr = curr->next;
  }
  
  head = NULL;
  free(head);
  free(curr->next);
