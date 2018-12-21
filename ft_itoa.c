/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:57:51 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 19:37:01 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		++len;
	}
	while (n > 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	i = get_len(n) - 1;
	if ((str = malloc(sizeof(char) * (get_len(n) + 1))))
	{
		if (n < 0)
		{
			n = -n;
			str[0] = '-';
		}
		while (n > 0)
		{
			str[i] = (n % 10) + 48;
			--i;
			n = n / 10;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
