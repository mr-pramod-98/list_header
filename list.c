struct list
{
	void *data;
	struct list *next;
}; 

(struct list)* add_rear(struct list *head,const void *data)
{
	struct list *temp,*node;
	temp = head;
	node = (struct list*)malloc(sizeof(struct list));
	memcopy(temp->data,data);
	while(temp->next != NULL)
	{
		temp = temp->next;
	}	
	temp->next = node;
	return head;	
}

(struct list)* del_rear(struct list *head)
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

(struct list)* display(struct list *head)
{
	struct list *temp;
	temp = head;
	if(head->next == NULL)
	{
		return NULL;
	}
	else
{
}
