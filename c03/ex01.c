/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:08:09 by akuat             #+#    #+#             */
/*   Updated: 2023/08/24 16:35:59 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (*s1 != '\0' && *s2 != '\0' && x < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		x++;
		s1++;
		s2++;
	}
	if (x == n)
		return (0);
	return (*s1 - *s2);
}

int main()
{
    // Test cases where strings are equal
    printf("Equal strings:\n");
    printf("Test 1: %d\n", ft_strncmp("apple", "apple", 5)); // Expected output: 0
    printf("Test 2: %d\n", ft_strncmp("hello", "hello", 3)); // Expected output: 0
    printf("Test 3: %d\n", ft_strncmp("world", "world", 10)); // Expected output: 0

    // Test cases where first string is lexicographically smaller
    printf("\nFirst string is lexicographically smaller:\n");
    printf("Test 4: %d\n", ft_strncmp("apple", "banana", 5)); // Expected output: Negative value
    printf("Test 5: %d\n", ft_strncmp("hello", "world", 3)); // Expected output: Negative value
    printf("Test 6: %d\n", ft_strncmp("cat", "dog", 10)); // Expected output: Negative value

    // Test cases where first string is lexicographically greater
    printf("\nFirst string is lexicographically greater:\n");
    printf("Test 7: %d\n", ft_strncmp("banana", "apple", 5)); // Expected output: Positive value
    printf("Test 8: %d\n", ft_strncmp("world", "hello", 3)); // Expected output: Positive value
    printf("Test 9: %d\n", ft_strncmp("dog", "cat", 10)); // Expected output: Positive value

    // Test cases with empty strings
    printf("\nEmpty strings:\n");
    printf("Test 10: %d\n", ft_strncmp("", "", 0)); // Expected output: 0
    printf("Test 11: %d\n", ft_strncmp("", "abc", 2)); // Expected output: Negative value
    printf("Test 12: %d\n", ft_strncmp("xyz", "", 1)); // Expected output: Positive value

    return 0;
}
