/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 00:13:15 by ktiyari           #+#    #+#             */
/*   Updated: 2024/06/13 00:13:22 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct node
{
	int			value;
	int			index;
	struct node	*next;
}	t_node;

int			*fill_array(t_node *stack_a, int *arr, int s_size);
int			*sort_array(int *arr, int s_size);
void		indexing(t_node **stack_a, int *arr, int size);
void		push_to_b(t_node **stack_a, t_node **stack_b, int c);
void		push_to_a(t_node **stack_a, t_node **stack_b);

void		fill_stack(t_node **stack_a, char **args);
int			is_valid(char *args);
void		ft_free(char **args);
int			check_args(t_node **stack_a, char **argv);

int			check_duplicate(t_node *stack);
t_node		*create_node(int value);
void		add_node_tostack(t_node **head, t_node *new);
int			ft_isdigit(char c);
long double	ft_atoi(const char *str);

t_node		*get_last_node(t_node *stack);
t_node		*get_before_last_node(t_node *stack);

int			check_if_sorted(t_node *stack_a);
int			stack_size(t_node *stack_a);
int			get_index_pos(t_node **stack_a, int ic);
int			get_max_pos(t_node *stack, int v);

void		sort(t_node **stack_a, t_node **stack_b, int s_size);
void		sort_stack(t_node **stack_a, t_node **stack_b, int s_size);
void		free_stack(t_node **stack);

void		push(t_node **stack_1, t_node **stack_2);
void		pa(t_node **stack_b, t_node **stack_a);
void		pb(t_node **stack_a, t_node **stack_b);

void		reverse_rotate(t_node **stack);
void		rra(t_node **stack_a);
void		rrb(t_node **stack_b);
void		rrr(t_node **stack_a, t_node **stack_b);

void		rotate(t_node **stack);
void		ra(t_node **stack_a);
void		rb(t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);

void		swap(t_node **stack);
void		sa(t_node **stack_a);
void		sb(t_node **stack_b);
void		ss(t_node **stack_a, t_node **stack_b);

int			get_max(t_node *stack);
int			get_min(t_node *stack);
void		rra_pb(t_node **stack_a, t_node **stack_b);

void		sort_2(t_node **stack);
void		sort_3(t_node **stack);
void		sort_4(t_node **stack_a, t_node **stack_b);
void		sort_5(t_node **stack_a, t_node **stack_b);

char		**ft_split(char const *s, char c);

#endif