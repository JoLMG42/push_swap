/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:50:58 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/12 17:56:28 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_nbr(char c)
{
	if (c == ' ' || c == '-')
		return (1);
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_check_args(int ac, char **strs)
{
	int	i;
	int	j;

	i = 0;
	if (ac < 2)
		return (0);
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			if (!ft_check_nbr(strs[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_double(int ac, char **str)
{
	int	i;
	int	j;
	int	nbarg;

	(void)ac;
	nbarg = 0;
	while (str[nbarg])
		nbarg++;
	i = 0;
	while (i < nbarg)
	{
		j = i + 1;
		while (j < nbarg)
		{
			if (ft_atoi(str[j]) == ft_atoi(str[i]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_max(int ac, char **str)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		if (ft_atoi(str[i]) > 2147483647 || ft_atoi(str[i]) < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_all(int ac, char **str, t_stack *global)
{
	(void)global;
	if (!ft_check_args(ac, str))
		return (0);
	if (!ft_check_double(ac, str))
		return (0);
	if (!ft_check_max(ac, str))
		return (0);
	return (1);
}
