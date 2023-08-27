/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:02:18 by akuat             #+#    #+#             */
/*   Updated: 2023/08/27 20:13:30 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this code needs lots work to be done, not finished


#include <unistd.h>
// used everywhere to get the power of int
int	power_of(int a, int b)
{
	int	total;

	total = 1;
	while (b > 0)
	{
		total *= a;
		b--;
	}
	return (total);
}
// should be fine needs ckeck, used for converting to octal base

int	octal_base(int nbr, int rate)
{
	int		start;
	char	data[100];
	int		index;
	int		curr_int;
	int		i;

	index = 0;
	start = 10;
	while (nbr > 0)
	{
		curr_int = nbr / rate;
		data[index] = curr_int * 8 ^ index;
		nbr %= rate;
		rate /= 10;
		index++;
	}
	curr_int = 0;
	while (data[i] != '\0')
		curr_int += data[i];
	return (curr_int);
}

// check how big is the int, to know why what to devide to get proper nums

int	int_check(int nbr)
{
	int	start;
	int	stop;

	start = 10;
	stop = 0;
	while (stop == 0)
	{
		if (nbr % start != 0)
			start *= 10;
		else
			stop = 1;
	}
	return (stop);
}

// this conversion to binary should be fine
int	binary_base(int nbr,int rate, int i)
{
	// store all decimal vals
	char	data[100];
	char total;
	//for having the most left num in int
	int current_int;
	int i;

	while (nbr > 0 && i == 8)
	{
		total = power_of(8, i);
		current_int = nbr / rate;
		// write the bite decimal to storage
		data[i] = current_int * total;
		// if 123, get 23
		nbr %= 10;
		// lower the rate, to get the smaller val next time
		rate /= 10;
		// move the index, to write a new val
		i++;
	}
	// we can put hexa conver in here, just change mult from 8 to 16 and some details
	while (nbr > 0 && i == 16)
	{
		total = power_of(16, i);
		current_int = nbr / rate;
		// write the bite decimal to storage
		data[i] = current_int * total;
		// if 123, get 23
		nbr %= 10;
		// lower the rate, to get the smaller val next time
		rate /= 10;
		// move the index, to write a new val
		i++;
	}
	
}

int hexa_base(int nbr, int rate)
{

}
void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	*data[100];
	int		indx;
	int		ans;
	int		rate;

	i = 0;
	indx = 0;
	rate = int_check(nbr);
	while (base[i] != '\0')
		i++;
	while (nbr > 0)
	{
		if (i == 2)
			ans = binary_base(nbr, rate, i);
		else if (i == 10)
			ans = nbr;
		else if (i == 8)
			ans = octal_base(nbr, rate);
		else if (i == 16)

	}

}
