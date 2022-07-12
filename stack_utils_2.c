/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:59:08 by marlene           #+#    #+#             */
/*   Updated: 2022/07/12 23:00:32 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_all_reverse_b_to_a(t_stack *stack_src, t_stack *stack_dest)
{
    		while (stack_dest->size > 0)
			{
				pa(stack_src, stack_dest);
				ra(*stack_src);
			}
}

void    push_all_reverse_a_to_b(t_stack *stack_src, t_stack *stack_dest)
{
    while (stack_src->size > 0)
		{
			pb(stack_src, stack_dest);
			rb(*stack_dest);
		}
}

void    push_n_b_to_a(t_stack *stack_src, t_stack *stack_dest, int count)
{
        int i;

        i = 0;
    	while (i < count)
		{
			pa(stack_src, stack_dest);
			i++;
		}
}

void    push_all_a_to_b(t_stack *stack_src, t_stack *stack_dest)
{
     while (stack_src->size > 0)
		{
			pb(stack_src, stack_dest);
		}
}

void	clean(t_stack stack)
{
	free(stack.elements);
}