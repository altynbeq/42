//Exercice 00: ft_putchar

#include <unistd.h>

void ft_putchar(char c){
    write(STDOUT_FILENO, &c, 1);
}

int main(){
    char to_display = 'A';

    ft_putchar(to_display);
    return 0;
}
