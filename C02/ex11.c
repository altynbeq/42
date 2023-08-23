/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:38:49 by akuat             #+#    #+#             */
/*   Updated: 2023/08/23 19:41:21 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// needs more research, but code works
void	ft_putstr_non_printable(char *str)
{
	int		index;
	char	hex_digits[];

	hex_digits = "0123456789abcdef";
	index = 0;
	while (*str != '\0')
	{
		if (32 > *str || *str > 126)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, '\\', 1);
			write(1, &hex_digits[(*str / 16) & 0xF], 1);
			write(1, &hex_digits[*str & 0xF], 1);
		}
		index++;
		str++;
	}
}

int	main(void)
{
	char	*str;

	str = "hell\n123";
	ft_putstr_non_printable(str);
}
