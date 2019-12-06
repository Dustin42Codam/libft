/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 20:40:30 by dkrecisz      #+#    #+#                 */
/*   Updated: 2019/12/06 21:19:34 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	count;
	int	i;
	
	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		count++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static void		ft_free(char **ret, size_t x)
{
	while (x)
	{
		x--;
		free(ret[x]);
	}
	free(ret);
}

static char		**ft_write_str(char *str, char **ret, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	x = 0;
	while (str[i] && x < words)
	{
		j = 0;
		while (str[i + j] != c && str[i + j] != '\0')
			j++;
		ret[x] = ft_substr(str, i, j);
		if (ret[x] == NULL)
		{
			ft_free(ret, x);
			return (NULL);
		}
		x++;
		i += j;
		while (str[i] == c)
			i++;
	}
	ret[words] = NULL;
	return (ret);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	char	*str;
	char	*trimc;
	size_t	words;

	if (s == NULL)
		return (NULL);
	trimc = (char *)malloc(2 * sizeof(char));
	if (trimc == NULL)
		return (NULL);
	trimc[0] = c;
	trimc[1] = '\0';
	str = ft_strtrim(s, trimc);
	free(trimc);
	if (str == NULL)
		return (NULL);
	words = count_words(str, c);
	ret = (char **)malloc((words + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	ret = ft_write_str(str, ret, c, words);
	free(str);
	if (ret == NULL)
		return (NULL);
	return (ret);
}
