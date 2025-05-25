/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:32:39 by ptison            #+#    #+#             */
/*   Updated: 2025/05/25 16:46:44 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t dsize);

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	total;
	char	*result;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total = len_s1 + len_s2 + 1;
	result = malloc(total * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, total);
	ft_strlcat(result, s2, total);
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "hello, ";
	s2 = "my friend!";
	result = ft_strjoin(s1, s2);
	printf("%s \n", result);
	free(result);
	return (0);
}
*/
