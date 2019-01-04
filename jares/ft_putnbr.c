/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:33:12 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 21:11:19 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	print_neg(int n)
{
	if (n < 0 && n != -2147483648)
	{
		ft_putchar('-');
		return (-n);
	}
	return (n);
}

void		ft_putnbr(int n)
{
	int i;

	i = 0;
	n = print_neg(n);
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
		{
			ft_putchar(n + 48);
		}
	}
}
