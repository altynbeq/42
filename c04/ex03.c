/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:47:14 by akuat             #+#    #+#             */
/*   Updated: 2023/08/28 11:39:53 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 0;
	num = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\n' || 
			*str == '\f' || *str == '\v' || *str == '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign--;
		else if (*str == '+')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (sign < 0)
		num = -num;
	return (num);
}

int main()
{
    char test1[] = " ---+--+1234ab567";
    char test2[] = "   +42";
    char test3[] = "   -9999abc";
    char test4[] = "12345";
    char test5[] = "   ";
    
    printf("atoi(%s) = %d\n", test1, ft_atoi(test1));
    printf("atoi(%s) = %d\n", test2, ft_atoi(test2));
    printf("atoi(%s) = %d\n", test3, ft_atoi(test3));
    printf("atoi(%s) = %d\n", test4, ft_atoi(test4));
    printf("atoi(%s) = %d\n", test5, ft_atoi(test5));
    
    return 0;
}
