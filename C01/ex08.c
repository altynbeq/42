/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuat <akuat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:42:39 by akuat             #+#    #+#             */
/*   Updated: 2023/08/21 21:23:30 by akuat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	inner_counter;
	int	temp;

	counter = 0;
	while (counter < size - 1)
	{
		inner_counter = counter + 1;
		while (inner_counter < size)
		{
			if (tab[counter] > tab[inner_counter])
			{
				temp = tab[counter];
				tab[counter] = tab[inner_counter];
				tab[inner_counter] = temp;
			}
			inner_counter++;
		}
		counter++;
	}
}
