/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:59:08 by marlene           #+#    #+#             */
/*   Updated: 2022/07/13 13:38:02 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_all_reverse(t_stack *stack_src, t_stack *stack_dest)
{
    		while (stack_dest->size > 0)
			{
				push(stack_src, stack_dest);
				rotate(*stack_src);
			}
}

void    push_n(t_stack *stack_src, t_stack *stack_dest, int count)
{
        int i;

        i = 0;
    	while (i < count)
		{
			push(stack_src, stack_dest);
			i++;
		}
}

void    push_all(t_stack *stack_src, t_stack *stack_dest)
{
     while (stack_src->size > 0)
		{
			push(stack_src, stack_dest);
		}
}
