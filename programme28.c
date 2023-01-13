//28. C program to find power of any number using for loop.
#include<stdio.h>
int main()
{
    int base, exponent, result = 1;

    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for(int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    printf("%d^%d = %d", base, exponent, result);
    return 0;
}