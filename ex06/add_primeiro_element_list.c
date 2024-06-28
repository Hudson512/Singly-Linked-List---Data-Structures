#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} t_list;

t_list	*add_beg(t_list *head, int d){
	t_list *ptr = (t_list *)malloc(sizeof(t_list));
	ptr->data = d;
	ptr->next = NULL;

	ptr->next = head;
	head = ptr;
	return head;
}

int main(int argc, char const *argv[])
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->data = 45;
	head->next = NULL;

	t_list *cont = (t_list *)malloc(sizeof(t_list));
	cont->data = 98;
	cont->next = NULL;

	head->next = cont;

	int d = 3;

	
	printf("Endereco actual de head = %p\n", head);
	head = add_beg(head, d);
	printf("Novo endereco de head = %p\n", head);
	
	t_list *ptr = head;
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}

	return 0;
}