/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_print_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:06:31 by hmateque          #+#    #+#             */
/*   Updated: 2024/06/21 11:19:28 by hmateque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	
} t_list;

//Funcao para imprimir dados dos no
void	list_print_data(t_list *lts){
	if (lts == NULL)
		printf("Lista vazia\n");
	t_list *p = NULL;
	p = lts;
	int i = 1;
	while(p){
		printf("%dº Endereço: %p; valor: %d\n",i, p, p->data);
		p = p->next;
		i++;
	}
}

//Funcao para add elementos em frente da estrutura
void	ft_add_front(t_list **list, t_list *new){
	if (list && new){
		new->next = *list;
		*list = new;
	}
}

int main(void)
{
	t_list *list = NULL;
	t_list *p = (t_list *)malloc(sizeof(t_list));
	t_list *t = (t_list *)malloc(sizeof(t_list));
	p->data = 42;
	t->data = 32;
	ft_add_front(&list, p);
	ft_add_front(&list, t);
	list_print_data(list);
	
	return 0;
}
