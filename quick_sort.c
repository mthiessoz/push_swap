/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:16:41 by marlene           #+#    #+#             */
/*   Updated: 2022/07/12 16:00:16 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	partition(t_stack *stack_to_sort, t_stack *stack_buffer)
{
	int	pivot;
	int	i;
	int	nb_op;
	int	top;
	int	count;

	pivot = get(*stack_to_sort, get_pivot_index(*stack_to_sort));
	nb_op = stack_to_sort->size;
	i = 0;
	count = 0;
	while (i < nb_op)
	{
		top = get(*stack_to_sort, 0);
		if (top > pivot)
		{
			pb(stack_to_sort, stack_buffer);
			count++;
		}
		else
			ra(*stack_to_sort);
		i++;
	}
	return (count);
}

void	quick_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	c;
	int	i;

	c = 0;
	if (stack_a->size <= 5)
	{
		sort_case(stack_a, stack_b);
		while (stack_a->size > 0)
		{
			pb(stack_a, stack_b);
			rb(*stack_b);
		}
	}
	else
	{
		c = partition(stack_a, stack_b);
		quick_sort(stack_a, stack_b);
		while (stack_a->size > 0)
		{
			pb(stack_a, stack_b);
			rb(*stack_b);
		}
		i = 0;
		while (i < c)
		{
			pa(stack_a, stack_b);
			i++;
		}
		quick_sort(stack_a, stack_b);
	}
	while (stack_b->size > 0)
	{
		pa(stack_a, stack_b);
		ra(*stack_a);
	}
}

int	get_pivot_index(t_stack stack_to_sort)
{
	double	diff;
	double	min_diff;
	int		min_diff_index;
	int		i;
	double	mean;

	diff = 0.0;
	i = 0;
	min_diff = 2147483647.0;
	mean = get_mean(stack_to_sort);
	while (i < stack_to_sort.size)
	{
	diff = mean - (double)get(stack_to_sort, i);
		if (diff < 0.0)
			diff *= -1.0;
		if (diff < min_diff)
		{
			min_diff = diff;
			min_diff_index = i;
		}
	i++;
	}
	return (min_diff_index);
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

void	quick_sort_external(t_stack *stack_a, t_stack *stack_b)
{
	int	c;
	int	i;

	if (stack_a->size <= 5)
	{
		sort_case(stack_a, stack_b);
		while (stack_a->size > 0)
		{
			pb(stack_a, stack_b);
			rb(*stack_b);
		}
	}
	else
	{
		c = partition(stack_a, stack_b);
		quick_sort(stack_b, stack_a);
		while (stack_b->size > 0)
		{
			pb(stack_b, stack_a);
			rb(*stack_a);
		}
		i = 0;
		while (i < c)
		{
			pa(stack_b, stack_a);
			i++;
		}
		quick_sort(stack_b, stack_a);
	}
}
