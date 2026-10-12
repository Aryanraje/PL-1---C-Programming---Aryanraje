/* 
Program (19) -> write a program to accept the elements of a one-dimensional array and calculate the sum of all its elements.

Solution (1) : Using for loop
*/[span_0](start_span)[span_0](end_span)

# include <stdio.h>
int main()
{
    int arr[5], i, sum = 0;
    for ( i = 0 ; i < 5 , i ++ )
    {
        printf("Enter element at index %d :", i);
        scanf("%d", & arr [ i ]);
    }

    for ( i = 0 ; i < 5 ; i ++ )
    {
        sum = sum + arr [ i ];
    }
    printf("sum of all array elements = %d", sum);
    return 0;
}
