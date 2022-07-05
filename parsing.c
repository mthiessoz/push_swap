/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:49:40 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/05 14:49:52 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	parse_stack(int argc, char **argv)
{
	int		i;
	int		j;
	t_stack	stack;

	j = 1;
	stack.size = argc - 1;
	i = stack.size - 1;
	stack.elements = malloc(sizeof(int) * stack.size);
	while (i >= 0)
	{
		stack.elements[i] = ft_atoi(argv[j]);
		i--;
		j++;
	}
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
