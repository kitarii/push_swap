/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 00:33:52 by ktiyari           #+#    #+#             */
/*   Updated: 2024/07/09 00:33:56 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	get_max(t_node *stack)
{
	t_node	*node;
	int		max;

	node = stack;
	if (!stack)
		return (0);
	max = node->value;
	while (node)
	{
		if (node->next != NULL && max < node->next->value)
			max = node->next->value;
		node = node->next;
	}
	return (max);
}

int	get_min(t_node *stack)
{
	int		min;
	t_node	*node;

	node = stack;
	if (!stack)
		return (0);
	min = node->value;
	while (node)
	{
		if (node->next != NULL && min > node->next->value)
			min = node->next->value;
		node = node->next;
	}
	return (min);
}

void	rra_pb(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rra(stack_a);
	pb(stack_a, stack_b);
}
