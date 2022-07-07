/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:12:12 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/07 16:04:38 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		is_error;

	if (argc == 1)
	{
		ft_printf("Error1\n");
		return (1);
	}
	stack_a = parse_stack(argc, argv, &is_error);
	if (is_error == 1)
	{
		ft_printf("Error2\n");
		return (1);
	}
	if (already_sorted(stack_a) == 1)
		return (0);
	stack_b = init_stack(stack_a.size);
	print_stack(stack_a);
	print_stack(stack_b);
	ft_printf("\ntesting swap:\n");
	swap(stack_a);
	print_stack(stack_a);
	print_stack(stack_b);
	ft_printf("\ntesting push a --> b\n");
	push(&stack_a, &stack_b);
	push(&stack_a, &stack_b);
	print_stack(stack_a);
	print_stack(stack_b);
	/*ft_printf("\ntesting push b --> a\n");
	push(&stack_b, &stack_a);
	print_stack(stack_a);
	print_stack(stack_b);*/
	ft_printf("\ntesting rotate\n");
	rotate(stack_a);
	print_stack(stack_a);
	print_stack(stack_b);
	return (0);
}