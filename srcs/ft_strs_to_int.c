/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:28:10 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/14 16:33:29 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_str_to_int(char **str, int ac, t_stack *global)
{
	int	i;
	int	*tab;
	int	len;
	int	nbarg;

	(void)ac;
	nbarg = 0;
	len = 0;
	i = -1;
	while (str[nbarg])
		nbarg++;
	while (++i < nbarg)
		len += ft_strlen(str[i]);
	i = 0;
	tab = malloc(sizeof(int) * (len));
	if (!tab)
		return (0);
	while (i < nbarg)
	{
		tab[i] = ft_atoi(str[i]);
		i++;
	}
	global->len_a = i;
	return (tab);
}
