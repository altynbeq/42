/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:02:18 by akuat             #+#    #+#             */
/*   Updated: 2023/08/28 12:53:15 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
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
	while (j < i)
	{
		write(1, &data[j], 1);
		j++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	int		valid;

	i = 0;
	while (base[i] != '\0')
		i++;
	base_convertion(nbr, i);
}

int main()
{
    // Test cases
    int num = 123;
    char base_decimal[] = "0123456789";
    char base_binary[] = "01";
    char base_hex[] = "0123456789ABCDEF";
    char base_octal[] = "poneyvif";

    printf("Decimal: %d\n", num);
    ft_putnbr_base(num, base_decimal);
    printf("\n");

    printf("Binary: %d\n", num);
    ft_putnbr_base(num, base_binary);
    printf("\n");

    printf("Hexadecimal: %d\n", num);
    ft_putnbr_base(num, base_hex);
    printf("\n");

    printf("Octal: %d\n", num);
    ft_putnbr_base(num, base_octal);
    printf("\n");

    return 0;
}
