/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:49:31 by ptison            #+#    #+#             */
/*   Updated: 2025/05/24 21:58:09 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_whitespace(const char *str, int idx)
{
	while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n'
		|| str[idx] == '\v' || str[idx] == '\f' || str[idx] == '\r')
		idx++;
	return (idx);
}

int	convert_number(const char *str, int idx)
{
	int	res;

	res = 0;
	while (str[idx] >= '0' && str[idx] <= '9')
	{
		res = res * 10 + (str[idx] - '0');
		idx++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int	idx;
	int	sign;
	int	res;

	idx = 0;
	sign = 1;
	res = 0;
	idx = skip_whitespace(str, idx);
	if (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			sign = -1;
		idx++;
	}
	res = convert_number(str, idx);
	return (res * sign);
}

/*
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;
	int		expected;
	int		current;

	str = "   -1234ab567";
	expected = atoi(str);
	current = ft_atoi(str);
	printf("expected: %d \n", expected);
	printf("current: %d \n", current);
	assert(expected == current);
}
*/
