/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 00:18:45 by ktiyari           #+#    #+#             */
/*   Updated: 2024/06/13 00:18:47 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*tail;
	t_node	*before_tail;
	t_node	*tmp;

	if (stack && *stack && (*stack)->next)
	{
		tail = get_last_node(*stack);
		before_tail = get_before_last_node(*stack);
		tmp = *stack;
		*stack = tail;
		(*stack)->next = tmp;
		before_tail->next = NULL;
	}
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
