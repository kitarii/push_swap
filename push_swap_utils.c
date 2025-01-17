/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 01:28:01 by ktiyari           #+#    #+#             */
/*   Updated: 2024/07/09 01:28:04 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	check_if_sorted(t_node *stack_a)
{
	t_node	*current;

	current = stack_a;
	while (current != NULL && current->next != NULL)
	{
		if ((current->value) > (current->next)->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	stack_size(t_node *stack_a)
{
	t_node	*node;
	int		i;

	node = stack_a;
	i = 0;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}

int	get_index_pos(t_node **stack_a, int ic)
{
	int		i;
	t_node	*stack;

	stack = *stack_a;
	i = 0;
	while (i < stack_size(*stack_a))
	{
		if (stack->index < ic)
			break ;
		stack = stack->next;
		i++;
	}
	return (i);
}

int	get_max_pos(t_node *stack, int v)
{
	t_node	*node;
	int		i;

	node = stack;
	i = 0;
	while (node)
	{
		if (node->value == v)
			break ;
		node = node->next;
		i++;
	}
	return (i);
}
