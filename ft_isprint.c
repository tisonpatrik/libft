/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:04:54 by ptison            #+#    #+#             */
/*   Updated: 2025/05/21 21:08:36 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isprint(unsigned char i)
{
	if (i >= ' ' && i <= '~')
	{
		return (16384);
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

	c = '\0';
	current = ft_isprint(c);
	expected = isprint(c);
	assert(current == expected);
	c = 'a';
	current = ft_isprint(c);
	expected = isprint(c);
	assert(current == expected);
	printf("passed \n");
	return (0);
}
*/
