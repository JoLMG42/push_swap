/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:31:11 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/12 17:57:17 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_min(int *tab, int size, t_stack *global)
{
	int	min;
	int	i;

	(void)size;
	i = global->len_a - 1;
	min = tab[0];
	while (i != 0)
	{
		if (tab[i] < min)
			min = tab[i];
		i--;
	}
	return (min);
}

void	ft_sort_five_2(t_stack *global)
{
	int	min;

	min = 0;
	min = ft_get_min(global->tab, global->len_a, global);
	if (min == global->tab[0])
		ft_pb(global);
	if (min == global->tab[1])
	{
		ft_ra(global);
		ft_pb(global);
	}
	if (min == global->tab[2])
	{
		ft_rra(global);
		ft_rra(global);
		ft_pb(global);
	}
	if (min == global->tab[3])
	{
		ft_rra(global);
		ft_pb(global);
	}
}

void	ft_check_for_five(int min, t_stack *global)
{
	if (min == global->tab[2])
	{
		ft_ra(global);
		ft_ra(global);
		ft_pb(global);
	}
	if (min == global->tab[3])
	{
		ft_rra(global);
		ft_rra(global);
		ft_pb(global);
	}
	if (min == global->tab[4])
	{
		ft_rra(global);
		ft_pb(global);
	}
}

void	ft_sort_five(t_stack *global)
{
	int	min;

	min = 0;
	min = ft_get_min(global->tab, global->len_a, global);
	if (min == global->tab[0])
		ft_pb(global);
	if (min == global->tab[1])
	{
		ft_ra(global);
		ft_pb(global);
	}
	ft_check_for_five(min, global);
	ft_sort_five_2(global);
	ft_sort_3(global->tab, global->len_a, global);
	ft_pa(global);
	ft_pa(global);
}
