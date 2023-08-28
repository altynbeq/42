
#include <unistd.h>

int	valid_check(int nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || i < 2)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 0;
	num = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\n' || 
			*str == '\f' || *str == '\v' || *str == '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign--;
		else if (*str == '+')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (sign < 0)
		num = -num;
	return (num);
}

int	base_convertion(int nbr, int type)
{
	char	data[100];
	int		current_int;
	int		i;
	char	*ans;
	int		k;

	k = 0;
	while (nbr > 0)
	{
		current_int = nbr % type;
		if (current_int >= 0 && current_int <= 9)
			data[i] = current_int + '0';
		else if (current_int >= 10 && current_int <= 15)
			data[i] = current_int - 10 + 'A';
		i++;
	}
	data[i] = '\0';
	while (k < i)
	{
		ans[k] = data[i];
		k++;
	}
	ans[k + 1] = '\0';
	return (ans);
}

int	ft_atoi_base(char *str, char *base)
{
	int		num;
	char	*ans;
	int		i;
	int		total;
	int		valid;

	total = 0;
	num = ft_atoi(str);
	valid = valid_check(num, base);
	if (!valid)
		return ;
	while (*base != '\0')
		i++;
	ans = base_convertion(num, i);
	i = 0;
	while (ans[i] != '\0')
	{
		total += ans[i] - '0';
		i++;
	}
}
