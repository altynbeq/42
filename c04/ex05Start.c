#include <unistd.h>

int	ft_atoi_base(char *str, char *base)
{
	
}

int main()
{
    char str_decimal[] = "123";
    char str_binary[] = "1111011";
    char str_hex[] = "1A3";
    char str_octal[] = "777";

    char base_decimal[] = "0123456789";
    char base_binary[] = "01";
    char base_hex[] = "0123456789ABCDEF";
    char base_octal[] = "01234567";

    int result_decimal = ft_atoi_base(str_decimal, base_decimal);
    printf("Decimal: %s = %d\n", str_decimal, result_decimal);

    int result_binary = ft_atoi_base(str_binary, base_binary);
    printf("Binary: %s = %d\n", str_binary, result_binary);

    int result_hex = ft_atoi_base(str_hex, base_hex);
    printf("Hexadecimal: %s = %d\n", str_hex, result_hex);

    int result_octal = ft_atoi_base(str_octal, base_octal);
    printf("Octal: %s = %d\n", str_octal, result_octal);

    return 0;
}
