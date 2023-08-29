#include <stdio.h>
#include <unistd.h>

int	valid_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
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
	if (i < 2)
		return (0);
	return (1);
}

int ft_atoi(char *str)
{
    int num;
    int sign;

    sign = 0;
    num = 0;
    while (*str == ' ' || *str == '\t' || *str == '\n' || 
           *str == '\f' || *str == '\v' || *str == '\r')
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

int converter(int nbr, int type) {
    int result = 0;
    int base = 1;

    while (nbr > 0) {
        int digit = nbr % 10;
        if (digit >= 0 && digit < type) {
            result += digit * base;
            base *= type;
        } else {
            return -1;
        }

        nbr /= 10;
    }

    return result;
}

int ft_atoi_base(char *str, char *base)
{
    int ans;
    int type = 0;
    ans = 0;
    int valid = valid_check(base);
    int decimal = ft_atoi(str);
    while(base[type] != '\0')
        type++;
    if(valid == 0)
        return ;
    ans = converter(decimal, type);
    return(ans);
}

int main() {
    char str1[] = "101010";
    char base1[] = "01";
    char str3[] = "1101";
    char base3[] = "01";
    int result1 = ft_atoi_base(str3, base3);// Should print: 42
    
    printf("Result: %d\n", result1); 
    return 0;
}
