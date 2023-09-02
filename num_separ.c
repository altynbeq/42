#include <stdio.h>
void num_separ(long num, long rate)
{
    long current;
    
    current = 0;
    
    while (num >= 100)
    {
        if (num >= 100)
        {
            current = num / rate;
            printf("currect: %ld\n", current); // send numb to write
            printf("rate: %ld\n", rate); // send remainder to write
            num = num - rate;
            printf("left: %ld\n", num); // send remainder to write
            rate /= 100;
            // long rem = num % rate;
            // num %= rate;
        }
    }
    
    if (num < 100)
    {
        if (num % 10 == 0)
            printf("number: %ld\n", num); // send numb to write
        else if (num > 19) // if num (21-99)
        {
            rate = num % 10; // second int in num(99-21)
            num = num - rate; // first int in num(99-21)
            printf("Out: %ld\n", num); // write main decimal
            printf("rate: %ld\n", rate); // write left over num
        }
        else
        {
            printf("Out: %ld\n", num); // just write the number
        }
    }
}

int main()
{
    long num = 1250100;
    long rate = 1000000;

    num_separ(num, rate);

    return 0;
}
