// not finished solution
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:47:14 by akuat             #+#    #+#             */
/*   Updated: 2023/08/27 14:13:56 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putchar(char c, int neg_check)
// {
// 	if (neg_check != 0)
// 		write(1, "-", 1);
// 	write(1, &c, 1);
// }

void	index_finder(char *str, int **first_i, int **last_i, int **neg)
{
}

int	ft_atoi(char *str)
{
	int	first_i;
	int	last_i;
	int	neg;
	int	i;

	i = 0;
	first_i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			first_i = i;
		if (str[i] == '-')
			neg++;
		if (str[i] >= '0' && str[i] <= '9')
			last_i = i;
		i++;
	}
	char ans = first_i + '0';
	write (1, &ans, 1);
	return (0);
}

int	main(void)
{
	char	*str;

	str = "-++12c4a";
	ft_atoi(str);
	return (0);
}
