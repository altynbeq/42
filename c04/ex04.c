/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:02:18 by akuat             #+#    #+#             */
/*   Updated: 2023/08/28 13:18:07 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_check(int nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	base_convertion(int nbr, int type)
{
	char	data[100];
	int		current_int;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (nbr > 0)
	{
		current_int = nbr % type;
		if (current_int >= 0 && current_int <= 9)
			data[i] = current_int + '0';
		else if (current_int >= 10 && current_int <= 15)
			data[i] = current_int - 10 + 'A';
		nbr /= type;
		i++;
	}
	data[i] = '\0';
	while (i >= 0)
	{
		write(1, &data[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	int		valid;

	i = 0;
	valid = valid_check(nbr, base);
	if (valid == 0)
		return ;
	while (base[i] != '\0')
		i++;
	base_convertion(nbr, i);
}
