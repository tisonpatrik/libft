/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:16:35 by ptison            #+#    #+#             */
/*   Updated: 2025/05/23 12:43:03 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return d;
}

/*
#include <assert.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	const char	*src;
	char	expected[50];
	char	current[50];
	i = 5;
	src = "Hello from the other side.";
	memcpy(expected, src, i);
	ft_memcpy(current, src, i);

	printf("e: %s \n", expected);
	printf("e: %s \n", current);
	return (0);
}
*/
