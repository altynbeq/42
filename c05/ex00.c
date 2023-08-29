#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    if(!nb)
        return ;
    int total = 1;
    int counter = nb;
    
    while(counter > 0){
        total *= counter;
        counter--;
    }
    return (total);
}

int main() {
    int nb = 4;
    int result1 = ft_iterative_factorial(nb);
    
    printf("Result: %d\n", result1); 
    return 0;
}
