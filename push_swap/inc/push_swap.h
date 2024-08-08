/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:13:07 by minfinga          #+#    #+#             */
/*   Updated: 2024/08/08 19:43:08 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
# include "../libs/ft_printf/include/ft_printf.h"
# include "../libs/libft/libft.h"
# include "../libs/libft/get_next_line_bonus.h"

typedef struct	s_stack_node
{
	int	nbr;
	int	index;
	int	push_cost;
	bool	above_median;
	bool	cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

// PUSH_SWAP
int	main(int argc, char **argv);

// HANDLE_ERROR
int	error_syntax(char *str_n);
int	error_duplicate(t_stack_node *a, int n);
void	free_stack(t_stack_node **stack);
void	free_errors(t_stack_node **a);

// SPLIT
char	**split(char *str, char c);
void	free_split(char **result_array);


// INIT STACK
void	init_stack_a(t_stack_node **a, char **argv);


// STACK UTILS
int	stack_len(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);
bool	stack_sorted(t_stack_node *stack);

// INIT_A_TO_B
void	current_index(t_stack_node *stack);
void	set_cheapest(t_stack_node *stack);
void	init_nodes_a(t_stack_node *a, t_stack_node *b);

// INIT_B_TO_A
void	init_nodes_b(t_stack_node *a, t_stack_node *b);

// SORT_STACKS
void	sort_stacks(t_stack_node **a, t_stack_node **b);

// SORT_THREE
void	sort_three(t_stack_node **a);

// MOVE
void	move_a_to_b(t_stack_node **a, t_stack_node **b);
void	move_b_to_a(t_stack_node **a, t_stack_node **b);

// MOVE_UTILS
void	prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name);
t_stack_node	*get_cheapest(t_stack_node *stack);
void	min_on_top(t_stack_node **a);


// COMMANDS
void	pa(t_stack_node **a, t_stack_node **b, bool print);
void	pb(t_stack_node **b, t_stack_node **a, bool print);

void	rra(t_stack_node **a, bool print);
void	rrb(t_stack_node **b, bool print);
void	rrr(t_stack_node **a, t_stack_node **b, bool print);

void	ra(t_stack_node **a, bool print);
void	rb(t_stack_node **b, bool print);
void	rr(t_stack_node **a, t_stack_node **b, bool print);

void	sa(t_stack_node **a, bool print);
void	sb(t_stack_node **b, bool print);
void	ss(t_stack_node **a, t_stack_node **b, bool print);

#endif