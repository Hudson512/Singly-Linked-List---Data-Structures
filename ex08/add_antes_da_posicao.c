#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int	data;
	struct node *next;
} t_list;

void	add_list_end(t_list *head, int data){
	t_list *new = (t_list *)malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;

	t_list *ptr = head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

void	add_at_pos(t_list *head, int data, int pos){
	t_list *temp = (t_list *)malloc(sizeof(t_list));
	temp->data = data;
	temp->next = NULL;

	t_list *ptr = head;
	pos--;
	while(pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}
	temp->next = ptr->next;
	ptr->next = temp;
}

int main(void)
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->data = 45;
	head->next = NULL;

	add_list_end(head, 98);
	add_list_end(head, 3);

	int pos = 3;
	int data = 67;

	add_at_pos(head, data, pos);
	t_list *ptr = head;

	while (ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}

	return 0;
}