/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:29:49 by ktiyari           #+#    #+#             */
/*   Updated: 2024/07/08 22:29:51 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_2(t_node **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
	else
		return ;
}

void	sort_3(t_node **stack)
{
	if ((*stack)->value == get_max(*stack))
		ra(stack);
	else if ((*stack)->next->value == get_max(*stack))
		rra(stack);
	sort_2(stack);
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->value == get_min(*stack_a))
		pb(stack_a, stack_b);
	else if ((*stack_a)->next->value == get_min(*stack_a))
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->value == get_min(*stack_a))
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->value == get_min(*stack_a))
	{
		rra(stack_a);
		if (check_if_sorted(*stack_a))
			return ;
		pb(stack_a, stack_b);
	}
	sort_3(stack_a);
	pa(stack_b, stack_a);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->value == get_min(*stack_a))
		pb(stack_a, stack_b);
	else if ((*stack_a)->next->value == get_min(*stack_a))
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->value == get_min(*stack_a))
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->value == get_min(*stack_a))
		rra_pb(stack_a, stack_b);
	else if ((*stack_a)->next->next->next->next->value == get_min(*stack_a))
	{
		rra(stack_a);
		if (check_if_sorted(*stack_a))
			return ;
		pb(stack_a, stack_b);
	}
	sort_4(stack_a, stack_b);
	pa(stack_b, stack_a);
}
