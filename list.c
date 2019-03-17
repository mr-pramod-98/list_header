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

struct list* del_rear(struct list *head)
{
	struct list *temp1,*temp2;
	temp1 = head;
	temp2 = NULL;
	while(temp1->next == NULL)
	{
		temp2 = temp1
		temp1 = temp1->next;
	}
	temp2->next = NULL;
	free(temp1);
	return head;
}
