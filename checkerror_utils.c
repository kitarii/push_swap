/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:50:58 by ktiyari           #+#    #+#             */
/*   Updated: 2024/06/26 21:51:00 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	check_duplicate(t_node *stack)
{
	t_node	*node1;
	t_node	*node2;

	node1 = stack;
	while (node1)
	{
		node2 = node1->next;
		while (node2)
		{
			if (node1->value == node2->value)
				return (0);
			node2 = node2->next;
		}
		node1 = node1->next;
	}
	return (1);
}

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void	add_node_tostack(t_node **head, t_node *new)
{
	t_node	*node;

	node = *head;
	if (*head)
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	else
		*head = new;
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

long double	ft_atoi(const char *str)
{
	int			i;
	long double	nb;
	int			s;

	nb = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		s = -s;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * s);
}
