/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:41:13 by ptison            #+#    #+#             */
/*   Updated: 2025/05/24 20:52:52 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *ptr = (const unsigned char *)s;

    for (i = 0; i < n; i++)
    {
        if (ptr[i] == (unsigned char)c)
            return (void *)&ptr[i];
    }
    return NULL;
}

/*
#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    *s = "Hello, my friend.";
    int     c = 'f';
    size_t  n = strlen(s);

    void *expected = memchr(s, c, n);
    printf("expected: %s\n", (char *)expected);

    void *current = ft_memchr(s, c, n);
    printf("current: %s\n", (char *)current);

    assert(expected == current);
    return 0;
}
*/
