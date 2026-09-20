/* Program (14) -> write a program to generate the multiplication table of any number using while loop and for loop.
Solution (1): using while loop */
#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\nMultiplication Table of %d:\n", num);
    while (i <= 10)
    {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}
