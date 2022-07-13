/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:49:30 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/13 14:59:10 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack stack)
{
	int	tmp;
	int	last_index;
	int	bf_last_index;

	last_index = stack.size - 1;
	bf_last_index = stack.size - 2;
	if (stack.size >= 2)
	{
		tmp = stack.elements[last_index];
		stack.elements[last_index] = stack.elements[bf_last_index];
		stack.elements[bf_last_index] = tmp;
	}
	ft_printf("s%s\n", stack.name);
}

void	push(t_stack *stack_source, t_stack *stack_dest)
{
	int	last;

	last = stack_source->elements[stack_source->size - 1];
	stack_source->size = stack_source->size - 1;
	stack_dest->elements[stack_dest->size] = last;
	stack_dest->size = stack_dest->size + 1;
	ft_printf("p%s\n", stack_dest->name);
}

void	rotate(t_stack stack)
{
	int	tmp;
	int	i;
	int	last_index;
	int	first_index;

	last_index = stack.size - 1;
	first_index = 0;
	tmp = get(stack, first_index);
	i = 0;
	while (i < stack.size - 1)
	{
		set(stack, i, get(stack, i + 1));
		i++;
	}
	set(stack, last_index, tmp);
	ft_printf("r%s\n", stack.name);
}

void	reverse_rotate(t_stack stack)
{
	int	tmp;
	int	i;
	int	last_index;
	int	first_index;

	last_index = stack.size - 1;
	first_index = 0;
	tmp = get(stack, last_index);
	i = last_index;
	while (i > 0)
	{
		set(stack, i, get(stack, i - 1));
		i--;
	}
	set(stack, first_index, tmp);
	ft_printf("rr%s\n", stack.name);
}
