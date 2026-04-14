#include <stdio.h>
#include <stdint.h>

int main() {
    int a = 10, b = 20, c = 30;
    int* addresses[3] = {&a, &b, &c};
    
    printf("=== System Configuration ===\n");
    printf("Size of void*: %zu bytes\n", sizeof(void*));
    printf("Size of int*: %zu bytes\n", sizeof(int*));
    printf("Size of addresses array (3 int*): %zu bytes\n", sizeof(addresses));
    printf("Number of elements: %zu\n", sizeof(addresses)/sizeof(addresses[0]));
    
    printf("\n=== Architecture Info ===\n");
    // Check if 32-bit or 64-bit
    if (sizeof(void*) == 8)
        printf("64-bit system/compilation\n");
    else if (sizeof(void*) == 4)
        printf("32-bit system/compilation\n");
    else
        printf("Unusual architecture: %zu-byte pointers\n", sizeof(void*));
    
    return 0;
}
