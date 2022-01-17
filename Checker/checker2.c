/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:19:18 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/17 16:04:47 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_check_p(t_stack *global)
{
	char	str[1];

	ft_bzero(str, 1);
	read(0, str, 1);
	if (str[0] == 'a')
		ft_pa_checker(global);
	else if (str[0] == 'b')
		ft_pb_checker(global);
	else
	{
		ft_free(global);
		write(1, "Error\n", 6);
		exit(0);
	}
}

void	ft_check_r(t_stack *global)
{
	char	str[2];

	ft_bzero(str, 2);
	read(0, str, 2);
	if (str[0] == 'a' && str[1] == '\n')
		ft_ra_checker(global);
	else if (str[0] == 'b' && str[1] == '\n')
		ft_rb_checker(global);
	else if (str[0] == 'r' && str[1] == '\n')
		ft_rr_checker(global);
	else if (str[0] == 'r' && str[1] == 'a')
		ft_rra_checker(global);
	else if (str[0] == 'r' && str[1] == 'b')
		ft_rrb_checker(global);
	else if (str[0] == 'r' && str[1] == 'r')
		ft_rrr_checker(global);
	else
	{
		ft_free(global);
		write(1, "Error\n", 6);
		exit(0);
	}
}

void	ft_check_s(t_stack *global)
{
	char	str[1];

	ft_bzero(str, 1);
	read(0, str, 1);
	if (str[0] == 'a')
		ft_sa_checker(global);
	else if (str[0] == 'b')
		ft_sb_checker(global);
	else
	{
		ft_free(global);
		write(1, "Error\n", 6);
		exit(0);
	}
}

void	ft_read(t_stack *global)
{
	char	str[1];
	int		i;

	i = 1;
	ft_bzero(str, 1);
	while (i)
	{
		i = read(0, str, 1);
		if (str[0] == 'r')
			ft_check_r(global);
		else if (str[0] == 'p')
			ft_check_p(global);
		else if (str[0] == 's')
			ft_check_s(global);
		else if (str[0] == '\0')
			return ;
		else if (str[0] != '\n')
		{
			ft_free(global);
			write(1, "Error\n", 6);
			exit(0);
		}
	}
}
