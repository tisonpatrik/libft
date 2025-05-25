/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:12:25 by ptison            #+#    #+#             */
/*   Updated: 2025/05/25 16:37:13 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Calculates the length of a null-terminated string.
 *
 * This function counts the number of characters in the given string,
 * excluding the terminating null byte ('\0').
 *
 * @param str Pointer to the null-terminated string.
 * @return The number of characters in the string.
 */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <assert.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	expected;
	int	current;

	char* str = "pico";
	expected = strlen(str);
	current = ft_strlen(str);
	assert(expected == current);
	printf("passed \n");
	return (0);
}

*/
