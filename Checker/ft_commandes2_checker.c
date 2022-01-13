/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commandes2_checker.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:45:06 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/12 17:42:16 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rra_checker(t_stack *global)
{
	int	i;
	int	tmp;

	i = global->len_a - 2;
	tmp = global->tab[global->len_a - 1];
	while (i >= 0)
	{
		global->tab[i + 1] = global->tab[i];
		i--;
	}
	global->tab[0] = tmp;
}

void	ft_rrb_checker(t_stack *global)
{
	int	i;
	int	tmp;

	i = global->len_b - 2;
	tmp = global->tab_b[global->len_b - 1];
	while (i >= 0)
	{
		global->tab_b[i + 1] = global->tab_b[i];
		i--;
	}
	global->tab_b[0] = tmp;
}

void	ft_rrr_checker(t_stack *global)
{
	int	i;
	int	tmp;

	i = global->len_a - 2;
	tmp = global->tab[global->len_a - 1];
	while (i >= 0)
	{
		global->tab[i + 1] = global->tab[i];
		i--;
	}
	global->tab[0] = tmp;
	i = global->len_b - 2;
	tmp = global->tab_b[global->len_b - 1];
	while (i >= 0)
	{
		global->tab_b[i + 1] = global->tab_b[i];
		i--;
	}
	global->tab_b[0] = tmp;
}

void	ft_sa_checker(t_stack *global)
{
	int	tmp;

	tmp = global->tab[0];
	global->tab[0] = global->tab[1];
	global->tab[1] = tmp;
}

void	ft_sb_checker(t_stack *global)
{
	int	tmp;

	tmp = global->tab_b[0];
	global->tab_b[0] = global->tab_b[1];
	global->tab_b[1] = tmp;
}
