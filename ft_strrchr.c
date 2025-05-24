/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:25:02 by ptison            #+#    #+#             */
/*   Updated: 2025/05/24 20:36:01 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *str, int c)
{
	size_t	size;

	size = ft_strlen(str);
	while (str[size - 1])
	{
		if (str[size] == (char)c)
		{
			return ((char *)&str[size]);
		}
		size--;
	}
	return (NULL);
}

/*
#include <assert.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	int		c;
	char	*expected;
	char	*current;

	s = "Hello, my friend.";
	c = 'e';
	expected = strrchr(s, c);
	printf("expected: %s \n", expected);
	current = ft_strrchr(s, c);
	printf("current: %s \n", current);
	assert(expected == current);
	return (1);
}
*/
