/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:08:39 by akuat             #+#    #+#             */
/*   Updated: 2023/08/23 14:06:59 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
		if (!('a' <= *str || *str <= 'z'))
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
