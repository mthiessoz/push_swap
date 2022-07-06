/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:58:57 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/06 17:28:11 by mthiesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	no_double(t_stack stack, int j)
{
	int	i;

	i = 0;
	while (stack.elements)
	{
		if (stack.elements[i] == stack.elements[j])
		{
			ft_printf("Error\n");
			clean_exit(stack);
			exit(1);
		}
		i++;
	}
	return (0);
}

void	clean_exit(t_stack stack)
{
	free(stack.elements);
}
