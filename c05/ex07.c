#include <stdio.h>
#include <unistd.h>

int ft_find_next_prime(int nb)
{
    while(nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0){
        nb++;
    }
    return  nb;
}


int main() {
    int nb = 62;
    int power = 2;
    int result1 = ft_find_next_prime(nb);
    
    printf("Result: %d\n", result1); 
    return 0;
}
