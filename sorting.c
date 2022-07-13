/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:49:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/13 13:43:34 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_case(t_stack *stack_to_sort, t_stack *stack_buffer)
{
	int	sort_simple_threshold;

	sort_simple_threshold = get_sort_simple_treshold();
	if (already_sorted(*stack_to_sort) == 0)
	{
		if (stack_to_sort->size == 2)
			sort2(stack_to_sort);
		else if (stack_to_sort->size == 3)
			sort3(stack_to_sort);
		else if (stack_to_sort->size > 3 && stack_to_sort->size <= sort_simple_threshold)
			sort_simple(stack_to_sort, stack_buffer);
		else if (stack_to_sort->size > sort_simple_threshold)
		{
			push_all(stack_to_sort, stack_buffer);
			quick_sort(stack_to_sort, stack_buffer);
		}
	}
}

void	sort2(t_stack *stack_to_sort)
{
	if (get(*stack_to_sort, 0) > get(*stack_to_sort, 1))
		swap(*stack_to_sort);
}

int	get_sort_simple_treshold()
{
	return(27);
}