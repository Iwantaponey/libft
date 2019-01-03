#include <stdlib.h>
include "libft.h"

static size_t		ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if ((i == 1 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int			ft_is_begin_word(char const *s, size_t index, char c)
{
	if (index == 0 && s[index] != c)
		return (1);
	if (s[index] != c && s[index - 1] == c)
		return (1);
	return (0);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**tab;

	i = 0;
	k = 0;
	if ((tab = (char **)malloc(sizeof(char *) * ft_count_word(s, c))) == NULL)
		return (NULL);
	if (ft_count_word(s, c) == 0)
		return (tab);
	while (s[i] == c)
		i++;
	while (s[i])
	{
#include <string.h>

int	*how_many_char(char const *str, char c, int nb)
{
	int i;
	int j;
	int *res;

	i = 0;
	j = 1;
	if (res = malloc(sizeof(int)*nb))
	{
		while (str[j] && i < nb)
		
			if (str[j] != c)
			{
				++res[i];
			}
			else
			{
				if (str[j + 1] && str[j + 1] != c)
				{
					++i;
				}
			}
			++j;		
		}
		return (res);
	}
	return (NULL);
}

int	how_many_str(char const *str, char c)
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

char	**remplir(char **out, char const *str, char c, int *res, int nb)
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
		else 
		{
			if (str[j + 1] && str[j + 1] != c)
			{
				out[i][k] = '\0';
				++i;
				k = 0;
			}
		}
		++j;
	}
	out[i][k] = '\0';
	return (out);
}

char	**ft_strsplit(char const *str, char c)
{
	int nb;
	int i;
	int *res;
	char **out;

	i = 0;
	nb = how_many_str(str,c);
	res = how_many_char(str,c,nb);
	if (out = malloc(sizeof(char*)*nb))
	{
		while (i < nb)
		{
			if (out[i] = malloc(sizeof(char) * (res[i] + 1)))
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
	out = remplir(out, str, c, res, nb);
	return (NULL);
}

