#include <unistd.h>

void ft_print_alphabet(){
    char letter = 'z';

    while(letter >= 'a'){
        write(1, &letter, 1);
        letter--;
    }
}


int main(){
    ft_print_alphabet();
    return 0;
}
