/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:03:13 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 17:29:11 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		++i;
	}
	return (i);
}
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:57:51 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 23:20:13 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		++len;
		n = -n;
	}
	while (n > 0)
	{
		++len;
		n = n / 10;
	}
	printf("%d",len);
	return (len);
}

static char	*cas_spe(int n)
{
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	return (ft_strdup("0"));
}

char		*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		n2;

	n2 = n;
	if (n == -2147483648 || n == 0)
		return (cas_spe(n));
	i = get_len(n) - 1;
	printf("%d", get_len(n));
/*	if ((str = malloc(sizeof(char) * (get_len(n) + 1))))
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
		str[n2] = '\0';
		return (str);
	}*/
	return (NULL);
}

int main ()
{
	printf("%s", ft_itoa(12345600));
}
