/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:21:45 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/12 17:55:19 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sorted(char **strs, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(strs[i]) > ft_atoi(strs[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_mini_sort(int *tab, int size, t_stack *global)
{
	int	i;

	(void)size;
	i = 0;
	if (tab[i] > tab[i + 1])
		ft_sa(global);
}

void	ft_sort_3(int *tab, int size, t_stack *global)
{
	(void)size;
	if (tab[0] > tab[1] && tab[2] > tab[0])
		ft_sa(global);
	else if (tab[0] > tab[1] && tab[1] > tab[2])
	{
		ft_sa(global);
		ft_rra(global);
	}
	else if (tab[0] > tab[1] && tab[1] < tab[2])
		ft_ra(global);
	else if (tab[0] < tab[1] && tab[0] < tab[2] && tab[1] > tab[2])
	{
		ft_sa(global);
		ft_ra(global);
	}
	else if (tab[0] < tab[1] && tab[0] > tab[2])
		ft_rra(global);
}
