/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:53:23 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/07 00:27:11 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
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
void	clean_exit(t_stack stack);
void 	set(t_stack stack, int index, int value);

int		check_errors(t_stack stack);
int		no_double(t_stack stack);
int 	get(t_stack stack, int index);
int 	check_not_non_digits(char* str);
int 	array_size(char** array);

char	**get_args(int argc, char **argv);

#endif