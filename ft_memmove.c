/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:22:24 by ptison            #+#    #+#             */
/*   Updated: 2025/05/23 13:29:30 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

/*
#include <assert.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	overlap[100] = "1234567890";

	memmove(overlap + 2, overlap, 5);
	printf("overlap: %s\n", overlap);
	char ft_overlap[100]= "1234567890";
	ft_memmove(ft_overlap +2, ft_overlap, 5);
	printf("ft_overlap: %s\n",ft_overlap);
	assert(strcmp(overlap, ft_overlap) == 0);
	return (0);
}
*/
