/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:47:21 by marlene           #+#    #+#             */
/*   Updated: 2022/07/07 00:25:05 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get(t_stack stack, int index)
{
	return stack.elements[stack.size - (index + 1)];
}

void set(t_stack stack, int index, int value)
{
	stack.elements[stack.size - (index + 1)] = value;
}

char	**get_args(int argc, char **argv)
{
	char **argvm1;
	int i;

	if (argc == 2)
		return (ft_split(argv[1], ' '));
	argvm1 = malloc(sizeof(char *) * (argc - 1));
	i = 0;
	while (i < (argc - 1))
	{
		argvm1[i] = argv[i + 1];
		i++;
	}
	return (argvm1);
}

int array_size(char** array) {
	int	i;

	i = 0;
	while (array[i])
	{
		i++;
	}
	return (i);
}

