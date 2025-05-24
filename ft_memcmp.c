/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:13:37 by ptison            #+#    #+#             */
/*   Updated: 2025/05/24 21:17:00 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;
	int				diff;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		diff = ptr1[i] - ptr2[i];
		if (diff)
			return (diff);
		i++;
	}
	return (0);
}

/*
#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "Hello, my friend.";
    char *s2 = "Hello, my fiend.";
    size_t n = strlen(s1);

    int expected = memcmp(s1, s2, n);
    int current = ft_memcmp(s1, s2, n);

    printf("expected: %d\n", expected);
    printf("current:  %d\n", current);

    assert((expected == 0 && current == 0) || (expected * current > 0));
    return 0;
}
*/
