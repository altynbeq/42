/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:19:50 by akuat             #+#    #+#             */
/*   Updated: 2023/08/21 21:10:37 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	char	temp;
	char	max_count;
	char	counter;

	max_count = size - 1;
	counter = 0;
	while (counter < size/2)
	{
		temp = tab[counter];
		tab[counter] = tab[max_count];
		tab[max_count] = temp;
		counter++;
		max_count--; 
	}
}
