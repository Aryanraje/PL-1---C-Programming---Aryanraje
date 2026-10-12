/* 
Program (22) -> Write a program to read two matrices of the same order, perform matrix addition, and display the resultant matrix using a two-dimensional array.

solution (1) : using for loop.
*/[span_2](start_span)[span_2](end_span)

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];[span_3](start_span)[span_3](end_span)
    int i, j;[span_4](start_span)[span_4](end_span)

    printf("Enter elements of matrix A :\n");[span_5](start_span)[span_5](end_span)
    for(i=0; i<3; i++)[span_6](start_span)[span_6](end_span)
    {
        for(j=0; j<3; j++)[span_7](start_span)[span_7](end_span)
        {
            scanf("%d", & a[i][j]);[span_8](start_span)[span_8](end_span)
        }
    }

    printf("Enter elements of matrix B :\n");[span_9](start_span)[span_9](end_span)
    for(i=0; i<3; i++)[span_10](start_span)[span_10](end_span)
    {
        for(j=0; j<3; j++)[span_11](start_span)[span_11](end_span)
        {
            scanf("%d", & b[i][j]);[span_12](start_span)[span_12](end_span)
        }
    }

    for(i=0; i<3; i++)[span_13](start_span)[span_13](end_span)
    {
        for(j=0; j<3; j++)[span_14](start_span)[span_14](end_span)
        {
            c[i][j] = a[i][j] + b[i][j];[span_15](start_span)[span_15](end_span)
        }
    }

    printf("\nResultant Matrix :\n");[span_16](start_span)[span_16](end_span)
    for(i=0; i<3; i++)[span_17](start_span)[span_17](end_span)
    {
        for(j=0; j<3; j++)[span_18](start_span)[span_18](end_span)
        {
            printf("%4d", c[i][j]);[span_19](start_span)[span_19](end_span)
        }
        printf("\n");[span_20](start_span)[span_20](end_span)
    }

    return 0;[span_21](start_span)[span_21](end_span)
}
