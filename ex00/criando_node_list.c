/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   criando_node_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:56:30 by hmateque          #+#    #+#             */
/*   Updated: 2024/06/19 13:20:28 by hmateque         ###   ########.fr       */
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
	printf("%d\n", head->data);
	return 0;
}