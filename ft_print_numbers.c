#include <unistd.h>

void ft_print_alphabet(){
    int num = 0;

    while(num <= 9){
        char dig = '0' + num;
        write(1, &dig, 1);
        num++;
    }
}

int main(){
    ft_print_alphabet();
    return 0;
}
