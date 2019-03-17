#include<stdio.h>
struct list
{
	int data;
	struct list *next;
}; 

struct list* display(struct list *head)
{
     struct list *temp;
     temp = head;
     if(head->next == NULL)
     {
         return NULL;
     }
     else
     {
         while(temp == NULL)
         {
             printf("%d\n",temp->data);
             temp = temp->next;
         }	
     }
}

void main()
{
 int data[3] = {12,34,5};
 struct list * head = NULL; 
 for(i = 0;i < 3; i++)
       head = add_rear(head,data[i]);
 head = display(head);
 if(head==NULL)
       printf("no elements");
}
