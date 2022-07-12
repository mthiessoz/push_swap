/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:48:02 by marlene           #+#    #+#             */
/*   Updated: 2022/07/12 21:45:18 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get(t_stack stack, int index)
{
	return (stack.elements[stack.size - (index + 1)]);
}

void	set(t_stack stack, int index, int value)
{
	stack.elements[stack.size - (index + 1)] = value;
}

void	push_min(t_stack *stack_to_sort, t_stack *stack_buffer)
{
	int	min_index;

	min_index = get_min(*stack_to_sort);
	push_index(stack_to_sort, stack_buffer, min_index);
}

double	get_mean(t_stack stack)
{
	int		i;
	double	sum;

	i = 0;
	sum = 0.0;
	while (i < stack.size)
	{
		sum += (double)get(stack, i);
		i++;
	}
	return (sum / (double)stack.size);
}

void    push_index(t_stack *stack_to_sort, t_stack *stack_buffer, int index)
{
	int	nb_rot;
	int	i;
    
	i = 0;
	if (index > stack_to_sort->size / 2)
	{
		nb_rot = stack_to_sort->size - index;
		while (i < nb_rot)
		{
			rra(*stack_to_sort);
			i++;
		}
	}
	else
	{
		nb_rot = index;
		while (i < nb_rot)
		{
			ra(*stack_to_sort);
			i++;
		}
	}
	pb(stack_to_sort, stack_buffer);
}