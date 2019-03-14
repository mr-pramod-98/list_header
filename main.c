#include<stdio.h>
void main()
{
 int data[3] = {12,34,5};
 const void * head = NULL; 
 for(i = 0;i < 3; i++)
       head = add_rear(head,data[i]);
 head = display(head);
 if(head==NULL)
       printf("no elements");
}
