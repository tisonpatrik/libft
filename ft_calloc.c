/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:10:28 by ptison            #+#    #+#             */
/*   Updated: 2025/05/25 15:04:07 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			total;
	void			*ptr;
	unsigned char	*byte_ptr;
	size_t			i;

	total = nelem * elsize;
	if (nelem == 0 || elsize == 0)
	{
		return (malloc(1));
	}
	if (total / nelem != elsize)
	{
		return (NULL);
	}
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	byte_ptr = ptr;
	i = 0;
	while (i < total)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
