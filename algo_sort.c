/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 01:34:30 by ktiyari           #+#    #+#             */
/*   Updated: 2024/07/09 01:34:32 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	*fill_array(t_node *stack_a, int *arr, int s_size)
{
	int	i;

	i = 0;
	while (stack_a && i < s_size)
	{
		arr[i] = stack_a->value;
		stack_a = stack_a->next;
		i++;
	}
	return (arr);
}

int	*sort_array(int *arr, int s_size)
{
	int	i;
	int	j;
	int	swap;

	j = 0;
	while (j < s_size)
	{
		i = j + 1;
		while (i < s_size)
		{
			if (arr[j] > arr[i])
			{
				swap = arr[j];
				arr[j] = arr[i];
				arr[i] = swap;
			}
			i++;
		}
		j++;
	}
	return (arr);
}

void	indexing(t_node **stack_a, int *arr, int size)
{
	int		i;
	t_node	*stack;

	i = 0;
	while (i < size)
	{
		stack = *stack_a;
		while (stack)
		{
			if (stack->value == arr[i])
			{
				stack->index = i;
				break ;
			}
			stack = stack->next;
		}
		i++;
	}
}

void	push_to_b(t_node **stack_a, t_node **stack_b, int c)
{
	int	i;
	int	size;

	i = 0;
	size = stack_size(*stack_a);
	while (i < size)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + c))
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if (get_index_pos(stack_a, (i + c)) < stack_size(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	push_to_a(stack_a, stack_b);
}

void	push_to_a(t_node **stack_a, t_node **stack_b)
{
	int	max;
	int	max_pos;

	max = get_max(*stack_b);
	max_pos = get_max_pos(*stack_b, max);
	while (stack_size(*stack_b) > 0)
	{
		if (max == (*stack_b)->value)
		{
			pa(stack_b, stack_a);
			if (stack_size(*stack_b) > 0)
			{
				max = get_max(*stack_b);
				max_pos = get_max_pos(*stack_b, max);
			}
		}
		else
		{
			if (max_pos <= stack_size(*stack_b) / 2)
				rb(stack_b);
			else
				rrb(stack_b);
		}
	}
}
