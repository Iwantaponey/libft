/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:49:41 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 20:16:37 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iswhite(char c)
{
	if (c == '\t')
		return (1);
	if (c == ' ')
		return (1);
	if (c == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *str)
{
	int		i;
	int 	len;
	char	*res;

	i = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		while (iswhite(str[i]))
		{
			len--;
			++i;
		}
	
		++i;
	}

}
