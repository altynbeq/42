#include <unistd.h>


void display_func(int a, int b, int c, int d){
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &" ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
        write(1, &", ", 1);
    
}

void decider_func(a,b,c,d){
    if( d == '9' ){
        c++;
        d = 0;
        display_func(a, b, c, d);
    } else if(c == '9'){
        c = 0;
        b++;
        display_func(a, b, c, d);
    } else if(b == '9'){
        b = 0;
        c++;
        display_func(a, b, c, d);
    } 
}

void ft_print_comb_2(void) {
    int a;
    int b;
    int c;
    int d;
    a = '0';
    b = '0';
    c = '0';
    d = '1';
    while( c <= '9' ){
        display_func(a, b, c, d);
        d++;
    }
    decider_func(a,b,c,d);
    
}

int main(){
    ft_print_comb_2();
    return 0;
}
