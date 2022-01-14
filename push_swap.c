/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:59:12 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/14 17:15:28 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_check_how_many(char **strs, int *tab, t_stack *global)
{
	int		i;

	i = 0;
	while (strs[i])
		i++;
	if (ft_sorted(strs, i))
		return ;
	if (i == 2)
	{
		ft_mini_sort(tab, i, global);
		return ;
	}
	if (i == 3)
	{
		ft_sort_3(tab, i, global);
		return ;
	}
	if (i == 5)
	{
		ft_sort_five(global);
		return ;
	}
	ft_insertion(i, global);
}

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
	if (global->tab_b)
		free(global->tab_b);
	free(global);
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
	global->tab = ft_str_to_int(strs, ac, global);
	if (!ft_check_all(ac, strs, global))
	{
		ft_free(global);
		ft_free2(strs);
		write(1, "Error\n", 6);
		return (0);
	}
	global->tab_b = malloc(sizeof(int) * (global->len_a));
	global->len_b = 0;
	ft_check_how_many(strs, global->tab, global);
	ft_free2(strs);
	ft_free(global);
	return (0);
}
