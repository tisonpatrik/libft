/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:33:54 by ptison            #+#    #+#             */
/*   Updated: 2025/05/23 13:41:47 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <bsd/string.h>

int main(void)
{
    char src[] = "abcdef";
    char dst1[10] = "123456";
    char dst2[10] = "123456";

    printf("Before:\n");
    printf("src   = %s\n", src);
    printf("dst1  = %s\n", dst1);
    printf("dst2  = %s\n", dst2);

    size_t ret1 = ft_strlcpy(dst1, src, sizeof(dst1));
    size_t ret2 = strlcpy(dst2, src, sizeof(dst2));

    printf("\nAfter:\n");
    printf("dst1 (ft_strlcpy) = %s, return = %zu\n", dst1, ret1);
    printf("dst2 (strlcpy)    = %s, return = %zu\n", dst2, ret2);

    assert(strcmp(dst1, dst2) == 0);
    assert(ret1 == ret2);

    return 0;
}
*/
