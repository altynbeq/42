/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:08:54 by akuat             #+#    #+#             */
/*   Updated: 2023/08/26 19:26:01 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		neg_check;
	int		index;
	char	data[12];

	index = 0;
	neg_check = 0;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		neg_check = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		data[index++] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (neg_check)
		ft_putchar('-');
	while (index > 0)
		ft_putchar(data[index--]);
}

int	main(void)
{
	int	nb;

	nb = 12000;
	ft_putnbr(nb);
}
