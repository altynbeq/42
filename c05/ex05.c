#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb)
{
    int guess = 49/2;
    int prev;
    
    if(nb % 2 != 0 && nb % 3 != 0)
        return 0;
    while(guess != prev){
        prev = guess;
        guess = (prev + nb / prev) / 2;
        if (guess == prev)
            break;
    }
    return guess;
}

int main() {
    int nb = 9;
    int power = 2;
    int result1 = ft_sqrt(nb);
    
    printf("Result: %d\n", result1); 
    return 0;
}
