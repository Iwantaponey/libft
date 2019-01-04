/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:49:41 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/04 02:39:25 by jsegueni         ###   ########.fr       */
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

static int	whitebefore(char const *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (iswhite(str[i]))
	{
		++count;
		++i;
	}
	return (count);
}

static int	whiteafter(char const *str)
{
	int i;
	int count;

	i = ft_strlen(str) - 1;
	count = 0;
	while (iswhite(str[i]) && i >= 0)
	{
		++count;
		--i;
	}
	return (count);
}

char		*ft_strtrim(char const *str)
{
	int		i;
	int		j;
	int		len;
	char	*res;

	if (!str)
		return (NULL);
	i = whitebefore(str);
	j = 0;
	len = (int)ft_strlen(str) - whitebefore(str) - whiteafter(str);
	if (len <= 0)
		return (ft_strdup(""));
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	while (str[i] && i < (int)ft_strlen(str) - whiteafter(str))
	{
		res[j] = str[i];
		++j;
		++i;
	}
	return (res);
}
