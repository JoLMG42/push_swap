/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:32:36 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/12 17:55:45 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_repush_a(t_stack *global, int valeur)
{
	if (valeur == global->len_b)
		ft_rb(global);
	else if (valeur >= global->len_b / 2)
	{
		valeur = valeur - global->len_b;
		if (valeur < 0)
			valeur *= -1;
		while (valeur != 0)
		{
			ft_rrb(global);
			valeur--;
		}
	}
	else
	{
		while (valeur != 0)
		{
			ft_rb(global);
			valeur--;
		}
	}
	valeur = global->len_b + 1;
	while (--valeur != 0)
		ft_pa(global);
}

void	ft_rrrab(int tmp, int j, int valeur, t_stack *global)
{
	while (tmp + j - global->len_a > 0)
	{
		ft_rrb(global);
		tmp--;
	}
	while (tmp + valeur - global->len_b > 0)
	{
		ft_rra(global);
		tmp--;
	}
	while (tmp)
	{
		ft_rrr(global);
		tmp--;
	}
}

void	ft_rrab(int tmp, int j, int valeur, t_stack *global)
{
	while (tmp - j > 0)
	{
		ft_rb(global);
		tmp--;
	}
	while (tmp - valeur > 0)
	{
		ft_ra(global);
		tmp--;
	}
	while (tmp)
	{
		ft_rr(global);
		tmp--;
	}
}

void	ft_rarrb(int tmp, int j, int valeur, t_stack *global)
{
	(void)tmp;
	while (j)
	{
		ft_ra(global);
		j--;
	}
	while (global->len_b - valeur)
	{
		ft_rrb(global);
		valeur++;
	}
}

void	ft_rrarb(int j, int valeur, t_stack *global)
{
	while (global->len_a - j)
	{
		ft_rra(global);
		j++;
	}
	while (valeur)
	{
		ft_rb(global);
		valeur--;
	}
}
