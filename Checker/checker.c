/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:59:12 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/13 15:03:20 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free(t_stack *global, char **strs)
{
	int	i;

	free(global->tab);
	if (global->tab_b)
		free(global->tab_b);
	free(global);
	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

void	ft_check_sorted(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				write(1, "KO\n", 3);
				return ;
			}
			j++;
		}
		i++;
	}
	write(1, "OK\n", 3);
}

int	main(int ac, char **av)
{
	char	**strs;
	t_stack	*global;

	global = malloc(sizeof(t_stack));
	if (ac < 2)
	{
		free(global);
		return (0);
	}
	strs = ft_split(ft_strsjoin(av, ac), ' ');
	if (!ft_check_all(ac, strs, global))
	{
		ft_free(global, strs);
		write(1, "Error\n", 6);
		return (0);
	}
	global->tab = ft_str_to_int(strs, ac, global);
	global->tab_b = malloc(sizeof(int) * (global->len_a));
	global->len_b = 0;
	ft_read(global);
	ft_check_sorted(global->tab, global->len_a);
	ft_free(global, strs);
	return (0);
}
