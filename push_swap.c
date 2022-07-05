/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:12:12 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/05 16:32:02 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc == 1)
	{
		ft_printf("ERROR_NO_ARGS\n");
		return (0);
	}
	stack_a = parse_stack(argc, argv);
	stack_b = init_stack(stack_a.size);
	print_stack(stack_a);
	/*print_stack(stack_b);
	ft_printf("\ntesting swap:\n");
	swap(stack_a);
	print_stack(stack_a);
	print_stack(stack_b);
	ft_printf("\ntesting push a --> b\n");
	push(&stack_a, &stack_b);
	print_stack(stack_a);
	print_stack(stack_b);
	ft_printf("\ntesting push b --> a\n");
	push(&stack_b, &stack_a);
	print_stack(stack_a);
	print_stack(stack_b);
	ft_printf("\ntesting rotate\n");*/
	rotate(stack_a);
	print_stack(stack_a);
	print_stack(stack_b);
	return (0);
}
