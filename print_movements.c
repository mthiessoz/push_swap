/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_movements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:49:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/12 14:49:28 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_stack stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
