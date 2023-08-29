#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    power--;
    if(power < 0)
        return 0;
    if(power == 0)
        return nb;
    else
       return nb *= ft_iterative_power(nb, power);
}

int main() {
    int nb = 12;
    int power = 2;
    int result1 = ft_iterative_power(nb, power);
    
    printf("Result: %d\n", result1); 
    return 0;
}
