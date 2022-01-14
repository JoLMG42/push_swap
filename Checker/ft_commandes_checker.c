/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commandes_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:19:38 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/14 16:20:18 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pb_checker(t_stack *global)
{
	int	i;

	i = global->len_b - 1;
	while (i >= 0)
	{
		global->tab_b[i + 1] = global->tab_b[i];
		i--;
	}
	global->tab_b[0] = global->tab[0];
	i = 0;
	while (i < global->len_a - 1)
	{
		global->tab[i] = global->tab[i + 1];
		i++;
	}
	global->len_b += 1;
	global->len_a += -1;
}

void	ft_pa_checker(t_stack *global)
{
	int	i;

	i = global->len_a - 1;
	if (!global->len_b)
		return ;
	while (i >= 0)
	{
		global->tab[i + 1] = global->tab[i];
		i--;
	}
	global->tab[0] = global->tab_b[0];
	i = 0;
	while (i < global->len_b)
	{
		global->tab_b[i] = global->tab_b[i + 1];
		i++;
	}
	global->len_b += -1;
	global->len_a += 1;
}

void	ft_ra_checker(t_stack *global)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = global->tab[0];
	while (i < global->len_a - 1)
	{
		global->tab[i] = global->tab[i + 1];
		i++;
	}
	global->tab[global->len_a - 1] = tmp;
}

void	ft_rb_checker(t_stack *global)
{
	int	i;
	int	tmp;

	i = 0;
	if (!global->len_b)
		return ;
	tmp = global->tab_b[0];
	while (i < global->len_b - 1)
	{
		global->tab_b[i] = global->tab_b[i + 1];
		i++;
	}
	global->tab_b[global->len_b - 1] = tmp;
}

void	ft_rr_checker(t_stack *global)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = global->tab[0];
	while (i < global->len_a - 1)
	{
		global->tab[i] = global->tab[i + 1];
		i++;
	}
	global->tab[global->len_a - 1] = tmp;
	if (!global->len_b)
		return ;
	i = 0;
	tmp = global->tab_b[0];
	while (i < global->len_b - 1)
	{
		global->tab_b[i] = global->tab_b[i + 1];
		i++;
	}
	global->tab_b[global->len_b - 1] = tmp;
}
