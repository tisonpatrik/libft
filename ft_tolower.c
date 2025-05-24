/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 19:39:03 by ptison            #+#    #+#             */
/*   Updated: 2025/05/24 19:43:09 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (ch + 32);
	}
	return (ch);
}

/*
#include <assert.h>
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	upper;
	int	expected;
	int	current;

	upper= 'Z';
	expected = tolower(upper);
	printf("expected --> big: %c  , small: %c \n", upper, expected);
	current = ft_tolower(upper);
	printf("current --> big: %c  , small: %c \n", upper, current);
	assert(expected == current);
	return (1);
}
*/
