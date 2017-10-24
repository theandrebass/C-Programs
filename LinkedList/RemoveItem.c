#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

extern node *head;

void removeItem(int newb)
{
node *curr;
node *prev;
int count =0;

 if(head)
 {
      if((head)->next)
      {
	  curr = head;
	  prev = head;
	  
	  while(curr->d != newb && curr->next !=NULL)
	  {
	    if(count)
            prev = prev->next;
	    
	    curr = curr->next;
	    count++;
	  }
	  if(curr->d != newb)
	    printf("\n%d was not found in list.",newb);
	  
	   else if(curr->d == (head)->d){
	   printf("\n%s: %d","deleted", curr->d);
	   head = curr->next;
	   free(curr);
	   } 
	  
	  else if(!curr->next && curr->d == newb){
	  printf("\n%s: %d","deleted", curr->d);
	  free(curr);
	  prev->next = NULL;
	  }
	  else{
	   prev->next = curr->next; 
	   printf("\n%s: %d","deleted", curr->d);
	   free(curr);
	  }
      }
       else{
         printf("\n\nItem not found\n\n");
    }
 }
 else
 {
  printf("\n\nNo Items To Remove. The List Is Empty.\n\n"); 
 }
}
