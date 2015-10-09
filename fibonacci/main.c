#include <stdio.h>
#include "fibonacci.h"

int main(void)
{
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);
    
    printf("%u's fibonacci value is: %d\n", n, fibonacci_recursive(n));
    
    return 0;
}
