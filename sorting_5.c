/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:04:46 by marlene           #+#    #+#             */
/*   Updated: 2022/07/12 18:11:32 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_simple(t_stack *stack_to_sort, t_stack *stack_buffer)
{
	int	nb_min;
	int	i;

	nb_min = stack_to_sort->size - 3;
	i = 0;
	while (i < nb_min)
	{
		push_min(stack_to_sort, stack_buffer);
		i++;
	}
	sort3(stack_to_sort);
	i = 0;
	while (i < nb_min)
	{
		pa(stack_to_sort, stack_buffer);
		i++;
	}
}

void	push_min(t_stack *stack_to_sort, t_stack *stack_buffer)
{
	int	min_index;

	while (get_min(*stack_to_sort) != stack_to_sort->size - 1)
	{
		min_index = get_min(*stack_to_sort);
		if (min_index > stack_to_sort->size / 2)
		{
			if (min_index == stack_to_sort->size - 1)
			{
				rra(*stack_to_sort);
				min_index = 0;
			}
			else
			{
				rra(*stack_to_sort);
				min_index++;
			}
		}
		else
		{
			ra(*stack_to_sort);
			min_index--;
		}
	}
	pb(stack_to_sort, stack_buffer);
}

int	get_min(t_stack stack_src)
{
	int	min;
	int	min_index;
	int	i;

	i = 0;
	min = 32767;
	while (i < stack_src.size)
	{
		if (get(stack_src, i) < min)
		{
			min = get(stack_src, i);
			min_index = i;
		}
		i++;
	}
	return (min_index);
}
