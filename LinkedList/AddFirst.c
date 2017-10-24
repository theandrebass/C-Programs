#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

extern node *head;

void addFirst(int newb)
{
  node *curr;
  
  if(!head) 
     {
       if((head = (node *)malloc(sizeof(node))) == NULL)
	  {
	    fprintf(stderr, "insert_at_end: unable to malloc node for head\n");			
	    exit(3);
	  }
	  
      (head)->d = newb;
      (head)->next = NULL;
     }
  
	else {
	if((curr = (node *) malloc(sizeof(node))) == NULL)
	{
	fprintf(stderr, "insert_at_end: unable to malloc node for head\n");			
	    exit(3);  
	}
	curr->d = newb;
	curr->next = head;
	head = curr;
	}
}
