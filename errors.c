/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:58:57 by mthiesso          #+#    #+#             */
/*   Updated: 2022/07/07 00:29:57 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_not_non_digits(char* str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (i == 0) {
			 if (ft_isdigit(str[i]) == 0 && str[i] != '-') {
				return (1);
			}
		} else {
			if (ft_isdigit(str[i]) == 0) {
				return (1);
			}
		}
	  	i++;
	}
	return (0);
}

int	no_double(t_stack stack)
{
	int	i;
	int j;

	i = 0;
	while (i < stack.size - 1)
	{
		j = i + 1;
		while (j < stack.size) {
			if (stack.elements[i] == stack.elements[j])
			{
				clean_exit(stack);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	clean_exit(t_stack stack)
{
	free(stack.elements);
}