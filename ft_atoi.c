/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:24:16 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 23:10:52 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_white(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	if (c == '\v' || c == '\r' || c == '\f')
	{
		return (1);
	}
	return (0);
}

static int	is_neg(char c)
{
	if (c == '-')
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int nb;
	int neg;
	int i;

	i = 0;
	nb = 0;
	while (is_white(str[i]))
	{
		++i;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		neg = is_neg(str[i]);
		++i;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (nb * 10) + (str[i] - 48);
		++i;
	}
	if (neg == 1)
	{
		return (nb * (-1));
	}
	return (nb);
}
