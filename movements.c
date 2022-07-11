/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:49:30 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/11 19:26:17 by mthiesso         ###   ########.fr       */
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
}

void	push(t_stack *stack_source, t_stack *stack_dest)
{
	int	last;

	last = stack_source->elements[stack_source->size - 1];
	stack_source->size = stack_source->size - 1;
	stack_dest->elements[stack_dest->size] = last;
	stack_dest->size = stack_dest->size + 1;
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
	while (i <= stack.size)
	{
		set(stack, first_index, get(stack, first_index + 1));
		i++;
		first_index++;
	}
	set(stack, last_index, tmp);
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
	i = 0;
	while (i <= stack.size)
	{
		set(stack, last_index, get(stack, last_index - 1));
		i++;
		last_index--;
	}
	set(stack, first_index, tmp);
}
