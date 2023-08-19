#include <unistd.h>

int    print_mid(int a , int b){
    int localA = a;
    int localB = b;
    
    while(localA != 0){
        if(localA == a || localA == 1){
            write (1, &"*", 1);
            localA--;
        } else{
            write (1, &" ", 1);
            localA--;
        }
    }
    write (1, &"\n", 1);
    int rep = 1;
    print_chars(a,b, rep);
    
}

int	print_chars(int a, int b, int rep)
{
        int localA = a;
        int localB = b;
    	
    	while (localA >= 1)
    	{
    	   // write(1, &orig, 1);
    		if (a == localA && rep == 0){                       
    			write (1, &"/", 1);
    		} else if(a == localA && rep != 0){
    		    write (1, &"\\", 1);
    		}
    		else if (localA != 1){
    			write (1, &"*", 1);
    		}
    		else if (localA == 1){
    		    if(rep == 0){
    		        write (1, &"\\", 1);
    		    } else if(rep != 0){
    		    	write (1, &"/", 1);
    		    }
    			
    			if(rep == 0){
    			    write (1, &"\n", 1);
    			    print_mid(a,b);
    			}
    		}
    		localA--;
    	}
}

int mx(int a, int b){
    int rep = 0;
    print_chars(a, b, rep);
}

int	main(void)
{
	mx(10,6);
	return (0);
}
