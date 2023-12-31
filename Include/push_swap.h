/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:36:09 by gforns-s          #+#    #+#             */
/*   Updated: 2023/10/06 12:44:02 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

# define SORTED 0
# define NOT_SORTED 1

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

typedef struct s_moves
{
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
	int				total;
	int				nodes;
}					t_moves;

char		**ft_check_args(int argc, char **argv);
int			count_nodes(t_stack *stack);
t_stack		*swap_a(t_stack *a);
t_stack		*swap_b(t_stack *b);
void		swap_ss(t_stack *a, t_stack *b);
void		push_a(t_stack **b, t_stack **a);
void		push_b(t_stack **b, t_stack **a);
t_stack		*rotate_a(t_stack *a);
t_stack		*rotate_b(t_stack *b);
void		rotate_rotate(t_stack **a, t_stack **b);
t_stack		*fill_stack(char **matrix);
int			repited_value_check(t_stack *stack);
t_stack		*general_reverse_rotate(t_stack *stack);
t_stack		*reverse_rotate_a(t_stack *a);
t_stack		*reverse_rotate_b(t_stack *b);
void		reverse_rotate_rotate(t_stack **a, t_stack **b);
int			check_if_sorted(t_stack *stack);
int			sort_algorithm(t_stack **a, t_stack **b);
void		free_malloc_stack(t_stack **stack);
t_moves		best_mv(t_stack *stack_a, t_stack *stack_b,	int stk_len, int ind_b);
t_moves		init_moves(void);
void		apply_moves(t_stack **a, t_stack **b, t_moves mv);
void		sort_3(t_stack **stack_a);
int			find_max_content(t_stack *stack);
t_moves		optim_moves(t_moves mv);
void		finish_sort(t_stack **stack_a, t_stack **stack_b);
int			low_index(t_stack *stack);
int			calc_matrix_size(char **matrix);
int			find_max_x_num(int num, t_stack *b);
int			find_min_content(t_stack *stack);
int			find_index(int num, t_stack *stack);
void		gen_algor(t_stack **stack_a, t_stack **stack_b);
void		algor_5(t_stack **stack_a, t_stack **stack_b);
void		algor_3(t_stack **stack_a, t_stack **stack_b);
void		order_func(t_stack **stack_a, t_stack **stack_b);
int			repited_value_check(t_stack *stack);
t_moves		clac_total(t_moves mv);
char		**check_and_free(char **matrix, int flag);
void		free_char(char **s2, int k);

#endif