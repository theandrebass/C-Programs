#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

extern node *head;

void addOrdered(int newb)
{
 
node *curr = head;
node *prev = head;
node *new ;

int count = 0;
  
if(!head) 
     { 
       if((head = (node *)malloc(sizeof(node))) == NULL)
	  {
	    fprintf(stderr, "insert_at_end: unable to malloc node for head\n");			
	    exit(3);
	  }
	  
      head->d = newb;
      head->next = NULL;
     }
  
else {
       
       	if((new = (node *)malloc(sizeof(node))) == NULL)
		{
		  fprintf(stderr, "insert_at_end: unable to malloc node for head\n");			
		  exit(3);
		}
          
       	while(curr->d <= newb && curr->next != NULL)
	  {
	    if(count)
	      prev = prev->next;
	    
	    curr = curr-> next;
	    count++;
	  }

	if(curr->next)
	{
	new->d = newb;
	new->next = curr;
	prev->next = new;
	} 
	
	else if(curr->d == head->d)
	{
	  new->d = newb;
	  new->next = head;
	  head= new;
	}
	
	else if(curr->next == NULL) {
	if((curr->next = (node *)malloc(sizeof(node))) == NULL)
		{
		  fprintf(stderr, "insert_at_end: unable to malloc node for head\n");			
		  exit(3);
		}
		
	    curr->next->d = newb;
	    curr->next = NULL;
	} 
     }
}
