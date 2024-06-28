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
	else if (head->next == NULL){
		free(head);
		head = NULL;
	}
	else{
		t_list *temp = head;
		t_list *temp2 = head;
		while (temp->next != NULL){
			temp2 = temp;
			temp = temp->next;
		}
		temp2->next = NULL;
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

	

	t_list *ptr = head;
	printf("printf n 1\n");
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}

	head = del_first(head);
	ptr = head;
	printf("printf n 2 %p\n", ptr);
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	return 0;
}