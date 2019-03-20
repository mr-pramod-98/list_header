#include<stdio.h>
#include"list.h"


void main()
{
 int data[3] = {12,34,5};
 int i;
 struct list * head = NULL; 
 for(i = 0;i < 3; i++)
       head = add_rear(head,data[i],sizeof(int));
 head = display(head);
 if(head==NULL)
       printf("no elements");
}
