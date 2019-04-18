#include<stdio.h>

void display(const void *data)
{
 
 printf("%d",*(int*)data);
}

void main()
{
 int data[3] = {12,34,5};
 int i; 
 for(i = 0;i < 3; i++)
       display(&data[i]);
}
