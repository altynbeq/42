// int pre_biggest_div
#include <stdio.h>

int num_devider(int num)
{
    int local_num = num;
    int divider = 1;
    while (num / divider != 0)
        divider *= 10;
    divider /= 10;
    return divider;
}

int main() {
    int test_cases[] = {1000, 2000, 15000, 500, 7500, 80000, 12345, 42, 999, 100000};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++) {
        int num = test_cases[i];
        int base = num_devider(num);
        printf("Number: %d, Base: %d\n", num, base);
    }

    return 0;
}
