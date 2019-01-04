/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:50:38 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/04 02:39:58 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cnt_parts(const char *s, char c)
{
	int	count;
	int	in;

	in = 0;
	count = 0;
	while (*s)
	{
		if (in == 1 && *s == c)
			in = 0;
		if (in == 0 && *s != c)
		{
			in = 1;
			++count;
		}
		++s;
	}
	return (count);
}

static int		ft_wlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s)
	{
		++len;
		++s;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	nb_word = ft_cnt_parts(s, c);
	t = (char **)malloc(sizeof(char *) * (ft_cnt_parts(s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s)
			++s;
		t[i] = ft_strsub(s, 0, ft_wlen(s, c));
		if (t[i] == NULL)
			return (NULL);
		s = s + ft_wlen(s, c);
		++i;
	}
	t[i] = NULL;
	return (t);
}
