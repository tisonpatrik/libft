/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:24:31 by ptison            #+#    #+#             */
/*   Updated: 2025/05/25 16:42:46 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_of_str;

	if (!(start <= len))
	{
		return (NULL);
	}
	len_of_str = ft_strlen(s);
	if (len < len_of_str)
	{
		return (NULL);
	}
	str = malloc(len + 1 * sizeof(char));
	while (s[start])
	{
		str[start] = s[start];
		start++;
	}
	return (str);
}
