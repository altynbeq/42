#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    int counter;
    if(size > 0){
        counter = size - 1;
    } else {
        return(0);
    }
    
    while(*dest != '\0'){
        dest++;
    }
    while(*src != '\0' && counter != 0){
        *dest = *src;
        dest++;
        src++;
        counter--;
    }
    *dest = '\0';
    return(size  - 1 - counter);
}
int main() {
    char dest1[20] = "Hello";
    char src1[] = ", World!";
    unsigned int result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    printf("Result 1: %s\n", dest1); // Expected: "Hello, World!"
    printf("Length 1: %u\n\n", result1); // Expected: 13

    char dest2[6] = "Hello";
    char src2[] = ", World!";
    unsigned int result2 = ft_strlcat(dest2, src2, sizeof(dest2));
    printf("Result 2: %s\n", dest2); // Expected: "Hello"
    printf("Length 2: %u\n\n", result2); // Expected: 5

    char dest3[5] = "boy";
    char src3[] = "hell";
    unsigned int result3 = ft_strlcat(dest3, src3, 2);
    printf("Result 3: %s\n", dest3); // Expected: "bo"
    printf("Length 3: %u\n\n", result3); // Expected: 2

    char dest4[15] = "123";
    char src4[] = "4567890";
    unsigned int result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    printf("Result 4: %s\n", dest4); // Expected: "1234567890"
    printf("Length 4: %u\n\n", result4); // Expected: 10

    char dest5[5] = "abc";
    char src5[] = "def";
    unsigned int result5 = ft_strlcat(dest5, src5, 0);
    printf("Result 5: %s\n", dest5); // Expected: "abc"
    printf("Length 5: %u\n\n", result5); // Expected: 0

    return 0;
}
