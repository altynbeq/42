/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:13:49 by akuat             #+#    #+#             */
/*   Updated: 2023/08/24 19:34:15 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ref;
	char	*to_ref;

	while (*str != '\0')
	{
		str_ref = str;
		to_ref = to_find;

		while (*to_ref != '\0' && *str_ref == *to_ref)
		{
			str_ref++;
			to_ref++;
		}
		if (*to_ref == '\0')
			return (str);
		str++;
	}
	return (0);
}
