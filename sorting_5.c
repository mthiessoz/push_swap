/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:04:46 by marlene           #+#    #+#             */
/*   Updated: 2022/07/12 20:17:11 by marlene          ###   ########.fr       */
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
	push_n_b_to_a(stack_to_sort, stack_buffer, nb_min);
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
