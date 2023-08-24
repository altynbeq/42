/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:45:34 by akuat             #+#    #+#             */
/*   Updated: 2023/08/24 16:37:12 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


int main()
{
    // Test cases where strings are equal
    printf("Equal strings:\n");
    printf("Test 1: %d\n", ft_strcmp("apple", "apple")); // Expected output: 0
    printf("Test 2: %d\n", ft_strcmp("hello", "hello")); // Expected output: 0
    printf("Test 3: %d\n", ft_strcmp("world", "world")); // Expected output: 0

    // Test cases where first string is lexicographically smaller
    printf("\nFirst string is lexicographically smaller:\n");
    printf("Test 4: %d\n", ft_strcmp("apple", "banana")); // Expected output: Negative value
    printf("Test 5: %d\n", ft_strcmp("hello", "world")); // Expected output: Negative value
    printf("Test 6: %d\n", ft_strcmp("cat", "dog")); // Expected output: Negative value

    // Test cases where first string is lexicographically greater
    printf("\nFirst string is lexicographically greater:\n");
    printf("Test 7: %d\n", ft_strcmp("banana", "apple")); // Expected output: Positive value
    printf("Test 8: %d\n", ft_strcmp("world", "hello")); // Expected output: Positive value
    printf("Test 9: %d\n", ft_strcmp("dog", "cat")); // Expected output: Positive value

    // Test cases with empty strings
    printf("\nEmpty strings:\n");
    printf("Test 10: %d\n", ft_strcmp("", "")); // Expected output: 0
    printf("Test 11: %d\n", ft_strcmp("", "abc")); // Expected output: Negative value
    printf("Test 12: %d\n", ft_strcmp("xyz", "")); // Expected output: Positive value

    return 0;
}
