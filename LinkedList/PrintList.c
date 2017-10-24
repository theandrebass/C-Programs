#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

extern node *head;

void printList()
{
node * curr = head;
printf("\n");
  if(head)
 {
   while(curr)
   {
    printf("%d ", curr->d); 
    curr = curr->next;
   }
   printf("\n\n");
 }
 
 else
   printf("\n");
}
