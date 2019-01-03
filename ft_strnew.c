/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:41:08 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 19:25:07 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = 0;
	if (size == 0)
	{
		return ("\0");
	}
	if ((str = malloc(sizeof(char) * (size + 1))))
	{
		while (i < (int)size + 1)
		{
			str[i] = '\0';
			++i;
		}
		return (str);
	}
	return (NULL);
}
