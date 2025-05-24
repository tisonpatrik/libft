/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 18:52:06 by ptison            #+#    #+#             */
/*   Updated: 2025/05/24 19:00:45 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return ('a' - 32);
	}
	return (ch);
}

/*
#include <assert.h>
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	lower;
	int	upper;
	int	current;

	lower = 'a';
	upper = toupper(lower);
	printf("expected --> small: %c  , big: %c \n", lower, upper);
	current = ft_toupper(lower);
	printf("current --> small: %c  , big: %c \n", lower, current);
	assert(upper == current);
	return (1);
}
*/
