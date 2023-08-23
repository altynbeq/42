/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:14:03 by akuat             #+#    #+#             */
/*   Updated: 2023/08/22 20:30:58 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
		if (!('A' <= *str || *str <= 'Z'))
		{
			return (0);
		}
	}
	if (counter == 0)
	{
		return (1);
	}
	return (1);
}
