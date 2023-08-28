/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:03:34 by akuat             #+#    #+#             */
/*   Updated: 2023/08/26 13:04:54 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:03:34 by akuat             #+#    #+#             */
/*   Updated: 2023/08/28 11:29:00 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// final version 

#include <unistd.h>
#include <stdio.h> 

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "";
    char str3[] = "123456789";
    char str4[] = "Lorem ipsum dolor sit amet";
    char str5[] = "a";

    printf("Length of \"%s\": %d\n", str1, ft_strlen(str1));
    printf("Length of \"%s\": %d\n", str2, ft_strlen(str2));
    printf("Length of \"%s\": %d\n", str3, ft_strlen(str3));
    printf("Length of \"%s\": %d\n", str4, ft_strlen(str4));
    printf("Length of \"%s\": %d\n", str5, ft_strlen(str5));

    return 0;
}
