/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:39:31 by akuat             #+#    #+#             */
/*   Updated: 2023/08/23 13:07:59 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	new_word ;

	new_word = 1;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || 
			(*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'))
		{
			if (new_word)
			{
				if (*str >= 'a' && *str <= 'z')
					*str -= 32;
				new_word = 0;
			}
			else
			{
				if (*str >= 'A' && *str <= 'Z')
					*str += 32;
			}
		}
		else 
			new_word = 1;
		str++;
	}
	return (str);
}
