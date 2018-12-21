/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:50:38 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 21:17:29 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*how_many_char(char const *str, char c, int nb)
{
	int i;
	int j;
	int *res;

	i = 0;
	j = 1;
	if ((res = malloc(sizeof(int) * nb)))
	{
		while (str[j] && i < nb)
		{
			if (str[j] != c)
			{
				++res[i];
			}
			if (str[j] == c && str[j + 1] && str[j + 1] != c)
			{
				++i;
			}
			++j;
		}
		return (res);
	}
	return (NULL);
}

static int	how_many_str(char const *str, char c)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] && str[i + 1] != c)
		{
			++nb;
		}
		++i;
	}
	return (nb);
}

static char	**remplir(char **out, char const *str, char c, int nb)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 0;
	while (str[j] && i < nb)
	{
		if (str[j] != c)
		{
			out[i][k] = str[j];
			++k;
		}
		if (str[j] == c && str[j + 1] && str[j + 1] != c)
		{
			out[i][k] = '\0';
			++i;
			k = 0;
		}
		++j;
	}
	out[i][k] = '\0';
	return (out);
}

char		**ft_strsplit(char const *str, char c)
{
	int		nb;
	int		i;
	int		*res;
	char	**out;

	i = 0;
	nb = how_many_str(str, c);
	res = how_many_char(str, c, nb);
	if ((out = malloc(sizeof(char*) * nb)))
	{
		while (i < nb)
		{
			if ((out[i] = malloc(sizeof(char) * (res[i] + 1))))
			{
				++i;
			}
			else
			{
				free(out);
				return (NULL);
			}
		}
	}
	out = remplir(out, str, c, nb);
	return (NULL);
}
