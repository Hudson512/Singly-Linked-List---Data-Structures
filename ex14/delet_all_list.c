#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int	data;
	struct node *next;
} t_list;

void	add_list_last(t_list *head, int data){
	t_list *new = (t_list *)malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;

	while (head->next != NULL)
		head = head->next;
	head->next = new;
}

void	print_list(t_list *head){
	if (head == NULL)
		printf("Error print_list - List is empty!\n");
	else
	{
		while (head != NULL){
			printf("%d\n", head->data);
			head = head->next;
		}
	}
}

t_list	*delet_all_list(t_list *head){
	if (head != NULL){
		t_list *ptr = head;
		while (ptr != NULL){
			ptr = ptr->next;
			free(head);
			head = ptr;
		}
		return head;
	}
	else
		printf("Error delet_all_list - List is empty!\n");
}

int main(void)
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->data = 42;
	head->next = NULL;

	add_list_last(head, 43);
	add_list_last(head, 44);

	print_list(head);

	head = delet_all_list(head);

	print_list(head);
	return 0;
}
