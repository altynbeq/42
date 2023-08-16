#include <unistd.h>

void ft_is_negative(int n){
    if( n > 0 ){
        char pos = 'P';
         write(1, &pos, 1);
    } else {
        char neg ='N';
        
         write(1, &neg, 1);
    }
}

int main(){
    ft_is_negative(7);
}
