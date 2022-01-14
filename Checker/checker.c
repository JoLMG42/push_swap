/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:59:12 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/14 17:19:49 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free2(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

void	ft_free(t_stack *global)
{
	free(global->tab);
	free(global->tab_b);
	free(global);
}

void	ft_check_sorted(t_stack *global, int *tab, int size)
{
	int	i;
	int	j;

	if (global->len_b)
	{
		write(1, "KO\n", 3);
		return ;
	}
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
		free(global);
		ft_free2(strs);
		write(1, "Error\n", 6);
		return (0);
	}
	global->tab = ft_str_to_int(strs, ac, global);
	ft_free2(strs);
	global->tab_b = malloc(sizeof(int) * (global->len_a));
	global->len_b = 0;
	ft_read(global);
	ft_check_sorted(global, global->tab, global->len_a);
	ft_free(global);
	return (0);
}
