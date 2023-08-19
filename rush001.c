// Online C compiler to run C program online
#include <stdio.h>



void print_char(int a, int b){
    int localA = a;
    int floor = b;
    int counter = 6;
    
    while(counter != 0){
        
        
        
        
        if(floor == b && localA == a || floor == 1 && localA == 1){
            write (1, &"/", 1);
            localA--;
            counter--;
        } else if(floor == b && localA != a && localA != 1){
            write (1, &"*", 1);
            localA--;
            counter--;
        } else if( localA == 1 && floor == b || localA == a &&  floor == 1){
            write (1, &"\\", 1);
            localA = a;
            counter--;
        } else if(floor != b && localA != a && localA != 1){
            write (1, &" ", 1);
            counter--;
            localA--;
        }
        
        // if(counter%a == 0 && localA == 0){
        //     write (1, &"\n", 1);
        // }
    }
}


int main() {
    // Write C code here
    print_char(5,3);

    return 0;
}
