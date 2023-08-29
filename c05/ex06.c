#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    if(nb < 2)
        return 0;
    if( (nb > 1 && nb < 4) || (nb % 2 != 0 && nb % 3 != 0 && nb % 5 != 0))
        return 1;
    else
        return 0;
}
int main() {
    int nb = 0;
    int power = 2;
    int result1 = ft_is_prime(nb);
    
    printf("Result: %d\n", result1); 
    return 0;
}
