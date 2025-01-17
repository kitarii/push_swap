/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funs_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 00:05:07 by ktiyari           #+#    #+#             */
/*   Updated: 2024/06/14 00:05:11 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_node	*get_last_node(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_node	*get_before_last_node(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}
