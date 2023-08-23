/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:25:34 by akuat             #+#    #+#             */
/*   Updated: 2023/08/23 14:07:15 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (str);
}
