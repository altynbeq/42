#include <stdio.h>
#include <unistd.h>

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


// void base_conversion(int nbr, int type) {
    
// }

int ft_atoi_base(char *str, char *base) {
    int length = 0;
    int index = 0;
    int result = 0;
    
    while(str[length] != '\0')
        length++;
    while(index < length){
        int num = str[index] - '0';
        result = result * 2 + num;
        index++;
    }
    char ans;
    if(result < 10){
        ans = result + '0';
    } else {
        ans = result + 'A' - 10;
    }
    write(1, &ans, 1);
    return (0);
}

int main() {
    char str1[] = "101010";
    char base1[] = "01";
    int result1 = ft_atoi_base(str1, base1); // Should print: 42

    return 0;
}
