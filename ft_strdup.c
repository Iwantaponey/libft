/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:03:58 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 17:29:58 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*str2;

	len = ft_strlen(str);
	i = 0;
	if (!(str2 = malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	while (str[i])
	{
		str2[i] = str[i];
		++i;
	}
	str2[i] = '\0';
	return (str2);
}
