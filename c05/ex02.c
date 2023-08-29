#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    if(power < 0)
        return 0;
    int total = 1;
    while(power > 0){
        total *= nb;
        power--;
    }
    return(total);
}

int main() {
    int nb = 4;
    int power = 3;
    int result1 = ft_iterative_power(nb, power);
    
    printf("Result: %d\n", result1); 
    return 0;
}
