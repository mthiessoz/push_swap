/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:47:21 by marlene           #+#    #+#             */
/*   Updated: 2022/07/13 14:29:16 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int argc, char **argv, int *new_argc, int *must_free)
{
	char	**argvm1;
	int		i;

	if (argc == 2)
	{
		*must_free = 1;
		*new_argc = ft_nbwords(argv[1], ' ');
		argvm1 = ft_split(argv[1], ' ');
	}
	else
	{
		*must_free = 0;
		*new_argc = argc - 1;
		argvm1 = malloc(sizeof(char *) * (argc - 1));
		i = 0;
		while (i < (argc - 1))
		{
			argvm1[i] = argv[i + 1];
			i++;
		}
	}
	return (argvm1);
}

void	free_args(char **str, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	clean(t_stack stack)
{
	free(stack.elements);
}