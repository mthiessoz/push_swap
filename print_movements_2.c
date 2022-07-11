/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_movements_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:49:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/11 19:26:09 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_stack stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rra(t_stack stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}
