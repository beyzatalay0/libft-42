/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:27:38 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/24 18:56:42 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static size_t	free_check(char **arr, int i)
{
	if (!arr[i])
	{
		while (i > 0)
		{
			i--;
			free(arr[i]);
		}
		free(arr);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		j;
	const char	*start;

	j = 0;
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[j] = ft_substr(start, 0, s - start);
			if (!free_check(result, j))
				return (NULL);
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
