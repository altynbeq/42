/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:05:29 by akuat             #+#    #+#             */
/*   Updated: 2023/08/28 11:32:07 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// final solution
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "";
    char str3[] = "This is a test.";

    printf("Output of ft_putstr:\n");
    ft_putstr(str1);
    printf("\n");
    
    ft_putstr(str2);
    printf("\n");
    
    ft_putstr(str3);
    printf("\n");

    return 0;
}
