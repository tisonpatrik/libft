/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 01:07:06 by ptison            #+#    #+#             */
/*   Updated: 2025/02/25 01:10:29 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*get_next_word(const char *str, char c, size_t *start)
{
	size_t	i;
	size_t	word_len;
	char	*word;

	while (str[*start] && str[*start] == c)
		(*start)++;
	i = *start;
	word_len = 0;
	while (str[i] && str[i] != c)
	{
		word_len++;
		i++;
	}
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		word[i] = str[*start + i];
		i++;
	}
	word[i] = '\0';
	*start += word_len;
	return (word);
}

static void	free_split(char **split, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;
	size_t	pos;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < word_count)
	{
		result[i] = get_next_word(s, c, &pos);
		if (!result[i])
		{
			free_split(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	sep;
	int		count;

	str = "W0rd5 t0 spl1t";
	sep = '0';
	count = count_words(str, sep);
	printf("count: %d \n", count);
}
*/
