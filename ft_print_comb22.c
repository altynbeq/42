#include <unistd.h>

void	ft_print_comb2(void)
{
	char	digits[5];
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			digits[0] = '0' + i / 10;
			digits[1] = '0' + i % 10;
			digits[2] = ' ';
			digits[3] = '0' + j / 10;
			digits[4] = '0' + j % 10;
			write (1, digits, 5);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

int main(){
    ft_print_comb2();
    return 0;
}
