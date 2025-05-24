/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:18:42 by ptison            #+#    #+#             */
/*   Updated: 2025/05/24 21:46:27 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)(&big[i]));
			}
			++j;
		}
		++i;
	}
	return (NULL);
}

/*
#include <assert.h>
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char	*big = "Hello, my friend.";
	const char	*little = "my";
	size_t		len;
	char		*expected;
	char		*current;

	len = 20;
	expected = strnstr(big, little, len);
	printf("expected: %s\n", expected);
	current = ft_strnstr(big, little, len);
	printf("current:  %s\n", current);
	assert((expected == NULL && current == NULL) || (strcmp(expected,
				current) == 0));
	return (0);
}
*/
