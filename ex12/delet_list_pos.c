#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
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

t_list	*del_list_pos(t_list *head, int pos){
	t_list *temp1 = head;
	t_list *temp2 = temp1;
    int i = 1;
    if (head == NULL){
        printf("List is empty!\n");
        head = NULL;
    }
    else if (i == pos && temp1 != NULL && temp1->next != NULL){
        temp2 = temp1->next;
        free(temp1);
        temp1 = NULL;
        head = temp2;
    }
    else{
        while (temp1 != NULL && i <= pos){
            temp2 = temp1;
            temp1 = temp1->next;
            i++;
            if (i == pos)
                break;
        }
        temp2->next = temp1->next;
        free(temp1);
        temp1 = NULL;
        head = temp2;
    }
    return head;
}

int main(void)
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head->data = 45;
	head->next = NULL;

    add_list_end(head, 46);
    add_list_end(head, 47);

    t_list *ptr = head;
	
	printf("printf List\n");
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	
	head = del_list_pos(head, 2);
	ptr = head;
	
	printf("printf List\n");
	while(ptr != NULL){
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	return 0;
}