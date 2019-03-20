struct list
{
	void *data;
	struct list *next;
};

struct list* add_rear(struct list *head,const void *data,int size);

struct list* del_rear(struct list *head);

struct list* display(struct list *head);
