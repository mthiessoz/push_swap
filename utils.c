/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlene <marlene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:47:21 by marlene           #+#    #+#             */
/*   Updated: 2022/07/12 23:51:18 by marlene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int argc, char **argv, int *new_argc)
{
	char	**argvm1;
	int		i;

	if (argc == 2)
	{
		*new_argc = ft_nbwords(argv[1], ' ');
		argvm1 = ft_split(argv[1], ' ');
	}
	else
	{
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

int	array_size(char **array)
{
	// int	i;

	// i = 0;
	// while (array[i])
	// {
	// 	i++;
	// }
	// return (i);
	return (sizeof(array) / sizeof(char*));
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