#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} t_list;

t_list	*del_first(t_list *head){
	if (head == NULL)
		printf("List is empty!\n");
	else{
		t_list *temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
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

	t_list *ptr = head;
	printf("printf n 1\n");
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}

	head = del_first(head);
	ptr = head;
	printf("printf n 2\n");
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	return 0;
}