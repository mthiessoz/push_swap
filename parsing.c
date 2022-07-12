/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:49:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/12 23:36:12 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	parse_stack(int argc, char **argv, int *is_error)
{
	int		i;
	int		j;
	t_stack	stack;
	char	**checked_args;
	int		checked_argc;

	checked_args = get_args(argc, argv, &checked_argc);
	j = 0;
	stack.size = checked_argc;
	i = stack.size - 1;
	stack.elements = malloc(sizeof(int) * stack.size);
	while (i >= 0)
	{
		if (check_not_non_digits(checked_args[j]) == 1)
		{
			*is_error = 1;
			return (stack);
		}
		stack.elements[i] = ft_atol(checked_args[j]);
		i--;
		j++;
	}
	*is_error = no_double(stack);
	free_args(checked_args, stack.size);
	return (stack);
}

void	print_stack(t_stack stack)
{
	int	i;

	ft_printf("----------\n");
	if (stack.size == 0)
		ft_printf("empty_stack\n");
	else
	{
		i = stack.size - 1;
		while (i >= 0)
		{
			ft_printf("%d \n", stack.elements[i]);
			i--;
		}
	}
	ft_printf("----------\n");
}

t_stack	init_stack(int capacity)
{
	t_stack	stack;

	stack.elements = malloc(sizeof(int) * capacity);
	stack.size = 0;
	return (stack);
}
