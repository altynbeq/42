/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:38:06 by akuat             #+#    #+#             */
/*   Updated: 2023/08/24 16:48:31 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	char			*orig;

	orig = dest;
	x = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != 0 && x < nb)
	{
		*dest = *src;
		dest++;
		src++;
		x++;
	}
	*dest = '\0';
	return (orig);
}

int main()
{
    char dest1[50] = "Hello, ";
    char src1[] = "world!";
    ft_strncat(dest1, src1, 5);
    printf("Test 1: %s\n", dest1); // Expected output: "Hello, world"

    char dest2[50] = "Concatenation";
    char src2[] = " is great!";
    ft_strncat(dest2, src2, 3);
    printf("Test 2: %s\n", dest2); // Expected output: "Concatenation is "

    char dest3[50] = "Testing ";
    char src3[] = "ft_strncat";
    ft_strncat(dest3, src3, 6);
    printf("Test 3: %s\n", dest3); // Expected output: "Testing ft_strn"

    char dest4[50] = "One ";
    char src4[] = "Two";
    ft_strncat(dest4, src4, 0);
    printf("Test 4: %s\n", dest4); // Expected output: "One "

    char dest5[50] = "Apples and ";
    char src5[] = "oranges";
    ft_strncat(dest5, src5, 7);
    printf("Test 5: %s\n", dest5); // Expected output: "Apples and oranges"

    char dest6[50] = "";
    char src6[] = "Edge Case";
    ft_strncat(dest6, src6, 5);
    printf("Test 6: %s\n", dest6); // Expected output: "Edge "

    return 0;
}
