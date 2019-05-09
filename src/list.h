struct list
{
	void *data;
	struct list *next;
};

struct list* add_rear(struct list *head,const void *data,int size);

struct list* display(struct list *head);
