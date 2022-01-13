/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:26:59 by jtaravel          #+#    #+#             */
/*   Updated: 2022/01/12 17:45:23 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strsjoin(char **str, int ac)
{
	int		i;
	int		j;
	int		len;
	char	*res;

	i = 0;
	j = 0;
	len = 0;
	while (++i < ac)
		len += ft_strlen(str[i]);
	res = malloc(sizeof(char) * ((len + ac)));
	if (!res)
		return (NULL);
	i = 0;
	len = 0;
	while (++i < ac)
	{
		j = -1;
		while (str[i][++j])
			res[len++] = str[i][j];
		res[len++] = ' ';
	}
	res[len - 1] = '\0';
	return (res);
}
