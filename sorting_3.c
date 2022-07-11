/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:05:18 by marlene           #+#    #+#             */
/*   Updated: 2022/07/11 19:27:56 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_stack *stack_to_sort)
{
	int	case_id;

	case_id = get_case_id(get(*stack_to_sort, 0), get(*stack_to_sort, 1), \
		get(*stack_to_sort, 2));
	if (case_id == 1)
	{
		rra(*stack_to_sort);
		sa(*stack_to_sort);
	}
	else if (case_id == 2)
		sa(*stack_to_sort);
	else if (case_id == 3)
		rra(*stack_to_sort);
	else if (case_id == 4)
		ra(*stack_to_sort);
	else if (case_id == 5)
	{
		sa(*stack_to_sort);
		rra(*stack_to_sort);
	}
}

int	get_case_id(int first, int second, int third)
{
	if (first < second && second < third)
		return (0);
	if (first < second)
	{
		if (first < third)
			return (1);
		return (3);
	}
	if (second < third)
	{
		if (first < third)
			return (2);
		return (4);
	}
	return (5);
}
