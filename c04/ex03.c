/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:47:14 by akuat             #+#    #+#             */
/*   Updated: 2023/08/27 15:47:01 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_first(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			break ;
		i++;
	}
	return (i);
}

int	find_last(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		i++;
	}
	return (i);
}

int	neg_check(char *str, int j)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (i != j)
	{
		if (str[i] == '-')
			counter++;
		i++;
	}
	return (counter);
}

int	calc_total(char *str_ref)
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (str_ref[i] != '\0')
	{
		total = total * 10 + (str_ref[i] - '0');
		i++;
	}
	return (total);
}

int	ft_atoi(char *str)
{
	int		first_i;
	int		last_i;
	char	str_ref[100];
	int		neg;
	int		i;

	i = 0;
	first_i = find_first(str);
	last_i = find_last(str, first_i);
	neg = neg_check(str, first_i);
	if (neg % 2 != 0)
		write(1, "-", 1);
	while (first_i < last_i)
	{
		str_ref[i] = str[first_i];
		first_i++;
		i++;
	}
	str_ref[i] = '\0';
	neg = calc_total(str_ref);
	return (neg);
}

int	main(void)
{
	char	*str;

	str = "---+1c2c4a";
	ft_atoi(str);
	return (0);
}
