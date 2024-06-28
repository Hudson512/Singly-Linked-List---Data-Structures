/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:55:46 by hmateque          #+#    #+#             */
/*   Updated: 2024/06/19 15:07:15 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
	int data;
	struct node *link;
} t_list;

int count_of_nodes(t_list *head){
	int i = 0;
	if (head == NULL)
		return 0;
	t_list *p = head;
	while (p != NULL){
		i++;
		p = p->link;
	}
	return i;
}

int main(void)
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return 1;
	head->data = 1;
	head->link = NULL;

	t_list *new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return 1;
	new->data = 2;
	new->link = NULL;

	head->link = new;

	int i = count_of_nodes(head);
	printf("%d\n", i);
	return 0;
}