#include<stdio.h>
#include"list.h"
#include"Unity.h"

void main()
{
 int data[3] = {12,34,5};
 int i;
 struct list * head = NULL; 

 TEST_ASSERT_EQUAL(1,display(head));

 for(i = 0;i < 3; i++)
       head = add_rear(head, &data[i], sizeof(int));

 TEST_ASSERT_EQUAL(1,display(head));

 head = display(head);
 if(head==NULL)
       printf("no elements");
}
