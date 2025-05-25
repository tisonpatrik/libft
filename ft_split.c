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

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	is_separator(char character, char separator)
{
	if (character == separator)
	{
		return (1);
	}
	return (0);
}

int	count_words(const char *string, char separator)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (string[i])
	{
		if (is_separator(string[i], separator))
		{
			words++;
		}
		i++;
	}
	return (words);
}

char	*word_splitter(const char *str, char sep)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_separator(str[i], sep))
	{
		i++;
	}
	word = (char *)malloc(sizeof(char *) * (i + 1));
	if (word == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] && !is_separator(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	split_words(const char *str, char c, char **words, int count_of_words)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (count < count_of_words)
	{
		if (is_separator(str[i], c))
		{
			words[count] = word_splitter(str, str[i]);
			count++;
		}
		i++;
	}
	words[count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		count_of_words;

	count_of_words = count_words(s, c);
	words = (char **)malloc((count_of_words + 1) * sizeof(char));
	if (!words)
	{
		return (NULL);
	}
	split_words(s, c, words, count_of_words);
	return (words);
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
