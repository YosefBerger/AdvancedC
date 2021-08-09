#include <stdio.h>
#include <limits.h>
#include "Helper.h"

int main()
{
    printf("Hello, world!\n");
    printf("Types of casing: PascalCasing, camelBack, snake_case, kebab-case (bad idea)");
    printf("The size of an int is: %d bytes\tINT_MAX: %d\tINT_MIN: %d\n", sizeof(int), INT_MAX, INT_MIN);   // 4 bytes 99% of the time (in C/C++)
    printf("The size of a uint is: %d bytes\tUINT_MAX: %u\tUINT_MIN: %u\n", sizeof(unsigned int), UINT_MAX, 0); // 4 bytes 99% of the time (in C/C++)
    printf("The size of a long is: %d bytes\tLONG_MAX: %ld\tLONG_MIN: %ld\n", sizeof(long), LONG_MAX, LONG_MIN);    // 4 bytes 99% of the time (in C/C++)
    printf("The size of a long long is: %d bytes\tLLONG_MAX: %lld\tLLONG_MIN: %lld\n", sizeof(long long), LLONG_MAX, LLONG_MIN);    // 8 bytes 99% of the time (in C/C++)
    printf("The size of a pointer is %d bytes, this implies the program is compiled for a %d bit system\n", sizeof(int *), NumberOfBits(sizeof(int *)));    // Tends to be the number of bytes of the platform it was compiled for, 4 bytes for 32 bits, 8 bytes for 64 bits, etc

    return 0;
}
