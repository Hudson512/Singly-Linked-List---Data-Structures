/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_list_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:01:35 by hmateque          #+#    #+#             */
/*   Updated: 2024/06/21 13:28:57 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} t_list;

void	add_list_end(t_list *list, int new_data){
	t_list *p, *temp;
	
	p = list;
	temp = (t_list *)malloc(sizeof(t_list));
	temp->data = new_data;
	temp->next = NULL;
	while (p->next != NULL){
		p = p->next;
	}
	p->next = temp;
}

void	print_list(t_list *list){
	t_list *p = NULL;
	p = list;
	int i = 0;

	while(p){
		printf("%i - %d\n",i++, p->data);
		p = p->next;
	}
}

int main(void)
{
	t_list *list = (t_list *)malloc(sizeof(t_list));
	list->data = 0;
	list->next = NULL;
	int i = 1;
	while(i <= 10){
		add_list_end(list, i);
		i++;
	}
	print_list(list);

	return 0;
}