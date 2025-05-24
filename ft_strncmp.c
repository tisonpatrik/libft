/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptison <ptison@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:55:28 by ptison            #+#    #+#             */
/*   Updated: 2025/02/13 18:29:59 by ptison           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n > 0)
	{
		u1 = (unsigned char)*s1;
		u2 = (unsigned char)*s2;
		s1++;
		s2++;
		if (u1 != u2)
		{
			return (u1 - u2);
		}
		if (u1 == '\0')
		{
			return (0);
		}
		n--;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char			*s1;
	char			*s2;
	unsigned int	n;
	int				expected;
	int				result;

	// Test 1: Same
	// Arrange
	s1 = "hello";
	s2 = "hello";
	n = 5;
	expected = 0;
	// Act
	result = ft_strncmp(s1, s2, n);
	// Assert
	printf("Test 1: \"%s\" vs \"%s\" (n=%u) | Expected: %d, Got: %d\n", s1, s2,
		n, expected, result);
	// Test 2: first is smaller
	// Arrange
	s1 = "abc";
	s2 = "abcd";
	n = 3;
	expected = 0; // 'c' (99) - 'c' (99) = 0
	// Act
	result = ft_strncmp(s1, s2, n);
	// Assert
	printf("Test 2: \"%s\" vs \"%s\" (n=%u) | Expected: %d, Got: %d\n", s1, s2,
		n, expected, result);
	// Test 3: first is bigger
	// Arrange
	s1 = "abcd";
	s2 = "abc";
	n = 4;
	expected = 'd'; // 'd' (100) - '\0' (0) = 100
	// Act
	result = ft_strncmp(s1, s2, n);
	// Assert
	printf("Test 3: \"%s\" vs \"%s\" (n=%u) | Expected: %d, Got: %d\n", s1, s2,
		n, expected, result);
	// Test 4: restricted n
	// Arrange
	s1 = "abcd";
	s2 = "abef";
	n = 2;
	expected = 0; // 'a' == 'a', 'b' == 'b', so does no compare 'c' vs 'e'
	// Act
	result = ft_strncmp(s1, s2, n);
	// Assert
	printf("Test 4: \"%s\" vs \"%s\" (n=%u) | Expected: %d, Got: %d\n", s1, s2,
		n, expected, result);
	// Test 5: first is empty
	// Arrange
	s1 = "";
	s2 = "abc";
	n = 5;
	expected = -'a'; // '\0' (0) - 'a' (97) = -97
	// Act
	result = ft_strncmp(s1, s2, n);
	// Assert
	printf("Test 5: \"%s\" vs \"%s\" (n=%u) | Expected: %d, Got: %d\n", s1, s2,
		n, expected, result);
	// Test 6: Second is empty
	// Arrange
	s1 = "hello";
	s2 = "";
	n = 5;
	expected = 'h'; // 'h' (104) - '\0' (0) = 104
	// Act
	result = ft_strncmp(s1, s2, n);
	// Assert
	printf("Test 6: \"%s\" vs \"%s\" (n=%u) | Expected: %d, Got: %d\n", s1, s2,
		n, expected, result);
	// Test 7: Both are empty
	// Arrange
	s1 = "";
	s2 = "";
	n = 5;
	expected = 0;
	// Act
	result = ft_strncmp(s1, s2, n);
	// Assert
	printf("Test 7: \"%s\" vs \"%s\" (n=%u) | Expected: %d, Got: %d\n", s1, s2,
		n, expected, result);
	return (0);
}
*/
