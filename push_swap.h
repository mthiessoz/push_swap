/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:53:23 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/06 17:09:36 by mthiesso         ###   ########.fr       */
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

t_stack	parse_stack(int argc, char **argv);
t_stack	init_stack(int capacity);

void	print_stack(t_stack stack);
void	swap(t_stack stack);
void	push(t_stack *stack_source, t_stack *stack_dest);
void	rotate(t_stack stack);
void	clean_exit(t_stack stack);

int		check_errors(t_stack stack);
int		no_double(t_stack stack, int j);

#endif