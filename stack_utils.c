/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:48:02 by marlene           #+#    #+#             */
/*   Updated: 2022/07/13 14:55:53 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get(t_stack stack, int index)
{
    int new_index;

    new_index = stack.size - (index + 1);
    if (new_index < 0 || new_index >= stack.size)
    {
        ft_printf("Out of bounds index: %d (previously %d)\n", new_index, index);
        exit(1);
    }
	return (stack.elements[new_index]);
}

void	set(t_stack stack, int index, int value)
{
	stack.elements[stack.size - (index + 1)] = value;
}

void	push_min(t_stack *stack_src, t_stack *stack_dest)
{
	int	min_index;

	min_index = get_min(*stack_src);
	push_index(stack_src, stack_dest, min_index);
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

void    push_index(t_stack *stack_src, t_stack *stack_dest, int index)
{
	int	nb_rot;
	int	i;
    
	i = 0;
	if (index > stack_src->size / 2)
	{
		nb_rot = stack_src->size - index;
		while (i < nb_rot)
		{
			reverse_rotate(*stack_src);
			i++;
		}
	}
	else
	{
		nb_rot = index;
		while (i < nb_rot)
		{
			rotate(*stack_src);
			i++;
		}
	}
	push(stack_src, stack_dest);
}