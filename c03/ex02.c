/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:27:31 by akuat             #+#    #+#             */
/*   Updated: 2023/08/24 16:46:53 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*orig;

	orig = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (orig);
}

int main()
{
    char dest1[50] = "Hello, ";
    char src1[] = "world!";
    ft_strcat(dest1, src1);
    printf("Test 1: %s\n", dest1); // Expected output: "Hello, world!"

    char dest2[50] = "";
    char src2[] = "Concatenation";
    ft_strcat(dest2, src2);
    printf("Test 2: %s\n", dest2); // Expected output: "Concatenation"

    char dest3[50] = "Testing ";
    char src3[] = "ft_strcat";
    ft_strcat(dest3, src3);
    printf("Test 3: %s\n", dest3); // Expected output: "Testing ft_strcat"

    char dest4[50] = "One ";
    char src4[] = "Two";
    ft_strcat(dest4, src4);
    printf("Test 4: %s\n", dest4); // Expected output: "One Two"

    char dest5[50] = "Apples and ";
    char src5[] = "oranges";
    ft_strcat(dest5, src5);
    printf("Test 5: %s\n", dest5); // Expected output: "Apples and oranges"

    // Testing edge cases
    char dest6[50] = "Test ";
    char src6[] = "";
    ft_strcat(dest6, src6);
    printf("Test 6: %s\n", dest6); // Expected output: "Test "

    char dest7[50] = "";
    char src7[] = "Edge Case";
    ft_strcat(dest7, src7);
    printf("Test 7: %s\n", dest7); // Expected output: "Edge Case"

    return 0;
}
