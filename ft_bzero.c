/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:42:23 by ptison            #+#    #+#             */
/*   Updated: 2025/05/23 11:42:44 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <strings.h>

void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
	return (str);
}
/*
#include <assert.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	char	*str;
	char	expected[50];
	char	current[50];

	i = 1;
	str = "Hello from the other side.";
	
	strcpy(expected, str);
	bzero(expected, i);
	
	strcpy(current, str);
	ft_bzero(current, i);
	

	for (int j = 0; j < (int)strlen(str); j++)
		printf("%c", (unsigned char)expected[j]);
	printf("\n");
	
	for (int j = 0; j < (int)strlen(str); j++)
		printf("%c", (unsigned char)current[j]);
	printf("\n");

	assert(strcmp(current, expected) == 0);
	return (0);
}
*/
