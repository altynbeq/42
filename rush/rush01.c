#include <unistd.h>
#include "ft_putchar.h"

void	rush(int a, int b)
{
	int	x;
	int	y;

	y = 1;
	while (b >= y)
	{
		x = 1;
		while (a >= x)
		{
			if ((x == 1 && y == 1) || (y == b && x == 1))
				ft_putchar ('o');
			else if ((x == 1 && y == 1) || (y == 1 && x == 1))
				ft_putchar ('o');
			else if ((y != 1 && x == 1 && y != b))
				ft_putchar ('|');
			else if ((y != 1 && x == a && y != b))
				ft_putchar ('|');
			else if ((y != b && x == 1) || y != b && x == a)
				ft_putchar (' ');
			else 
				ft_putchar ('-');
			x++;
		}
		ft_putchar ('\n');
		y++;
	}
}
