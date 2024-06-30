#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} t_list;

void	del_last(t_list *head){
	
	if (head == NULL)
		printf("List is empty!\n");
	else if (head->next == NULL){
		free(head);
		head = NULL;
	}
	else{
		t_list *temp = head;
		while (temp->next->next != NULL)
			temp = temp->next;
		free(temp->next);
		temp->next = NULL;
	}
}

int main(void)
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->data = 45;
	head->next = NULL;
	
	t_list *new = (t_list *)malloc(sizeof(t_list));
	new->data = 55;
	new->next = NULL;
	head->next = new;
	
	t_list *ptr = head;
	del_last(head);
	
	printf("printf List\n");
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = (ptr->next != NULL) ? ptr->next : NULL;
	}
	return 0;
}