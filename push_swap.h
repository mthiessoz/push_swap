/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:53:23 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/12 23:30:58 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int		*elements;
	int		size;
}			t_stack;

t_stack	parse_stack(int argc, char **argv, int *is_error);
t_stack	init_stack(int capacity);

void	print_stack(t_stack stack);
void	swap(t_stack stack);
void	push(t_stack *stack_source, t_stack *stack_dest);
void	rotate(t_stack stack);
void	clean(t_stack stack);
void	set(t_stack stack, int index, int value);
void	reverse_rotate(t_stack stack);
void	sa(t_stack stack_a);
void	sb(t_stack stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack stack_a);
void	rb(t_stack stack_b);
void	rra(t_stack stack_a);
void	rrb(t_stack stack_b);
void	sort3(t_stack *stack_to_sort);
void	sort2(t_stack *stack_to_sort);
void	sort_simple(t_stack *stack_to_sort, t_stack *stack_buffer);
void	sort_case(t_stack *stack_to_sort, t_stack *stack_buffer);
void	push_min(t_stack *stack_to_sort, t_stack *stack_buffer);
void	quick_sort(t_stack *stack_a, t_stack *stack_b);
void	quick_sort_external(t_stack *stack_a, t_stack *stack_b);
void    push_all_reverse_a_to_b(t_stack *stack_src, t_stack *stack_dest);
void    push_all_reverse_b_to_a(t_stack *stack_src, t_stack *stack_dest);
void    push_n_b_to_a(t_stack *stack_src, t_stack *stack_dest, int count);
void    push_all_a_to_b(t_stack *stack_src, t_stack *stack_dest);
void    push_index(t_stack *stack_to_sort, t_stack *stack_buffer, int index);
void	free_args(char **str, int length);

int		check_errors(t_stack stack);
int		no_double(t_stack stack);
int		get(t_stack stack, int index);
int		check_not_non_digits(char *str);
int		array_size(char **array);
int		already_sorted(t_stack stack);
int		get_case_id(int first, int second, int third);
int		get_min(t_stack stack_src);
int		partition(t_stack *stack_to_sort, t_stack *stack_buffer);
int		get_pivot_index(t_stack stack_to_sort);
int		numbers_limit(char *str);
int		get_sort_simple_treshold();
int 	partition_2(t_stack *stack_to_sort, t_stack *stack_buffer);
int 	get_median(t_stack stack);

double	get_mean(t_stack stack);

char	**get_args(int argc, char **argv, int *new_argc);

#endif