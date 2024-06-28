/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   criando_list_simple2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:53:33 by hmateque          #+#    #+#             */
/*   Updated: 2024/06/19 14:00:54 by hmateque         ###   ########.fr       */
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
	t_list	*head; //declaracao de variavel do tipo t_list

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

	//Reutilizando a variavel new para criar um novo elemento na memoria
	new = (t_list *)malloc(sizeof(t_list));
	new->data = 62;
	new->link = NULL;

	//Add o elemento criado na lista de elementos (nó) na 3 posicao.
	head->link->link = new;
	printf("Acessando os dados do 3º nó.\n");
	printf("%d\n", head->link->link->data);
	return 0;
}