/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:57:20 by ptison            #+#    #+#             */
/*   Updated: 2025/05/25 15:03:43 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(char *src)
{
	size_t	len;
	int		i;
	char	*new_string;

	len = ft_strlen(src);
	new_string = malloc(len + 1 * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/*
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	*src;
	char	*expected;
	char	*current;

	src = "654";
	expected = strdup(src);
	current = ft_strdup(src);
	write(1, expected, 1);
	write(1, "\n", 1);
	write(1, current, 1);
	write(1, "\n", 1);
}
*/
