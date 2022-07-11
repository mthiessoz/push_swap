/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:12:12 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/11 12:47:09 by marlene          ###   ########.fr       */
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
		ft_printf("Error\n");
		return (1);
	}
	stack_a = parse_stack(argc, argv, &is_error);
	if (is_error == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (already_sorted(stack_a) == 1)
		return (0);
	
	stack_b = init_stack(stack_a.size);

	/*print_stack(stack_a);
	print_stack(stack_b);

	ft_printf("Testing quick sort :\n");*/

	sort_case(&stack_a, &stack_b);

	ft_printf("\n Finished quick sort\n");

	print_stack(stack_a);
	print_stack(stack_b);

	return (0);
}
