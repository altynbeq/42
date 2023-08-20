// Online C compiler to run C program online
#include <unistd.h>

void print_chars(int a, int b){
    int x;
    int y;
    
    y = 1;
    while( b >= y){
        x = 1;
        while(a >= x){
            if( (x == 1 && y == 1) || (x == a && y == b && a != 1 && b != 1) ){
                write (1, &"/", 1);
            } else if( (x == a && y == 1) || (y == b && x == 1) ){
                write (1, &"\\", 1);
            } else if( (y != 1 && y != b && x != 1 && x != a) ){
                write (1, &" ", 1);
            } else {
                write (1, &"*", 1);
            }
            x++;
        }
        write (1, &"\n", 1);
        y++;
    }
}


int main() {
    // Write C code here
    print_chars(5, 3);

    return 0;
}
