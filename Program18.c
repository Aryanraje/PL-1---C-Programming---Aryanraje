/* 
Program (18) -> write a program to accept elements of integer, float, and character arrays from the user and display the value and corresponding memory address of each array elements.

Solution(2) :- User define program + Using all types of loops + Implicit way to write the program
*/

# include <stdio.h>
int main()
{
    int var 1 [5];
    float var 2 [5];
    char var 3 [5];
    int i, j, k;

    for ( i = 0 ; i <= 4 ; i ++ )
    {
        printf("Enter your integer value :");
        scanf("%d", & var 1 [ i ]);
    }
    for ( i = 0 ; i <= 4 ; i ++ )
    {
        printf("At index %d", i);
        printf("the value of var 1 is %d ", var 1 [ i ]);
        printf("and address is %d \n", & var 1 [ i ]);
    }

    printf("\n \n");
    j = 0;
    while ( j <= 4 )
    {
        printf("Enter your float / decimal value :");
        scanf("%f", & var 2 [ j ]);
        j ++ ;
    }
    j = 0;
    while ( j <= 4 )
    {
        printf("At index %d", j);
        printf("The value of var 2 is %f", var 2 [ j ]);
        printf("and address is %d \n", & var 2 [ j ]);
        j ++ ;
    }

    printf("\n \n");
    k = 0;
    do
    {
        printf("Enter your character value :");
        scanf("% c", & var 3 [ k ]);
        k ++ ;
    }
    while ( k <= 4 );

    k = 0;
    do
    {
        printf("At index %d", k);
        printf("the value of var 3 is % c", var 3 [ k ]);
        printf("and address is %d \n", & var 3 [ k ]);
        k ++ ;
    }
    while ( k <= 4 );

    getch ();
}
