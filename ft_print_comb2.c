#include <unistd.h>

void ft_print_comb2(void){
    char a;
    char b;

    a = "00";
    b = "01";

    while( b < "99" ){

        while( a < "98" ){
            write(1 , &a, 2);
            write(1 , &b, 2);

            if( a != "98" && b != "99" ){
                write(1, ", ", 2);
            }
            b++;
        }
        a++;
    }

}

int main(){
    ft_print_comb2();
    return 0;
}
