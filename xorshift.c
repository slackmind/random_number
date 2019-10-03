#include <stdio.h>
#include <stdint.h>

int main() {
    
    uint32_t number;
    int iterations;

    printf("Enter a seed:  ");
    scanf("%u", &number);
    printf("How many random numbers to generate?  ");
    scanf("%d", &iterations);


    // based on the XORshift algorithm by George Marsaglia
    for (int i = 0; i < iterations; i++) {

        number ^= number << 13;

        number ^= number >> 17;

        number ^= number << 5;

        printf("\nA random number is %u", number);

    }

    return 0;
}