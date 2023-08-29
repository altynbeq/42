#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    if(nb < 0)
        return ;
    if(nb == 1)
        return nb;
    else 
        return nb * ft_iterative_factorial(nb - 1);
}

int main() {
    int nb = 4;
    int result1 = ft_iterative_factorial(nb);
    
    printf("Result: %d\n", result1); 
    return 0;
}
