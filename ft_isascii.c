/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 20:32:23 by ptison            #+#    #+#             */
/*   Updated: 2025/05/21 20:58:25 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(unsigned char c)
{
	if (c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
#include <assert.h>
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	c;
	int				current;
	int				expected;

	c = 0x40;
	current = ft_isascii(c);
	expected = isdigit(c);
	assert(current == expected);
	c = 's';
	current = ft_isascii(c);
	expected = isdigit(c);
	assert(current == expected);
	printf("passed \n");
	return (0);
}
*/
