struct list
{
	void *data;
	struct list *next;
}; 

struct list* add_rear(struct list *head,const void *data)
{
	struct list *temp,*node;
	if(head == NULL)
	{
		head = (struct list*)malloc(sizeof(struct list));
		memcopy(head->data,data);
	}
	else
	{	
		temp = head;
		node = (struct list*)malloc(sizeof(struct list));
		memcopy(node->data,data);
		while(temp->next != NULL)
		{
			temp = temp->next;
		}	
		temp->next = node;
	}	
	return head;	
}

struct list* display(struct list *head)
{
     struct list *temp;
     int data;	
     temp = head;
     if(head->next == NULL)
     {
         return NULL;
     }
     else
     {
         while(temp == NULL)
         {
	     data = (int)temp->data;
             printf("%d\n",data);
             temp = temp->next;
         }	
     }
}
