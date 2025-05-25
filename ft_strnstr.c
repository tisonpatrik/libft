/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:18:42 by ptison            #+#    #+#             */
/*   Updated: 2025/05/25 13:42:47 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	within_len(size_t i, size_t j, size_t len)
{
	return ((i + j) < len);
}

int	not_null_terminated(const char *s, size_t index)
{
	return (s[index] != '\0');
}

int	chars_match(const char *big, const char *little, size_t i, size_t j)
{
	return (big[i + j] == little[j]);
}

int	is_little_ended(const char *little, size_t j)
{
	return (little[j + 1] == '\0');
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && not_null_terminated(big, i))
	{
		j = 0;
		while (within_len(i, j, len) && not_null_terminated(big, i + j)
			&& chars_match(big, little, i, j))
		{
			if (is_little_ended(little, j))
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <assert.h>
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char	big[30] = "aaabcabcd";
	const char	little[] = "cd";
	size_t		len;
	char		*expected;
	char		*current;

	len = 8;
	expected = strnstr(big, little, len);
	printf("expected: %s\n", expected);
	current = ft_strnstr(big, little, len);
	printf("current:  %s\n", current);
	assert((expected == NULL && current == NULL) || (strcmp(expected,
				current) == 0));
	return (0);
}
*/
