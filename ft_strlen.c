/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:12:25 by ptison            #+#    #+#             */
/*   Updated: 2025/05/21 21:22:13 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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
