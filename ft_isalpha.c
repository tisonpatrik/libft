/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:45:34 by ptison            #+#    #+#             */
/*   Updated: 2025/05/21 17:35:49 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_isalpha(unsigned char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1024);
	}
	return (0);
}

/*
#include <assert.h>
#include <ctype.h>

int	main(void)
{
	int	i;
	int	expected;
	int	current;

	i = -10;
	while (i <= 200)
	{
		expected = isalpha(i);
		current = ft_isalpha(i);
		assert(expected == current);
		i++;
	}
	printf("it works \n");
}
*/
