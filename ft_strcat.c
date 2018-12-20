/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:09:06 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/20 20:05:38 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strcat(char *dest, const char *src)
{
	int i;

	i = 0;
	while (dest[i])
	{
		++i;
	}
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
