/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   criando_list_simples.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:30:48 by hmateque          #+#    #+#             */
/*   Updated: 2024/06/19 13:37:45 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int	data;
	struct node *link;
} t_list;

int main(int argc, char const *argv[])
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return 1;
	head->data = 42;
	head->link = NULL;
	printf("Acessando os dados do 1º nó.\n");
	printf("%d\n", head->data);

	t_list *new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return 1;
	new->data = 52;
	new->link = NULL;
	head->link = new;
	printf("Acessando os dados do 2º nó.\n");
	printf("%d\n", head->link->data);
	return 0;
}