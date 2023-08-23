/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:08:22 by akuat             #+#    #+#             */
/*   Updated: 2023/08/23 13:38:16 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	count;

	count = size - 1;
	while (size != 0)
	{
		*dest = *src;
		dest++;
		src++;
		count--;
	}
	*dest = '\0';
	return (size + 1);
}
