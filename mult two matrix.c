#include <stdio.h>
int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];

    int row, col, i, sum;
    printf("Enter elements in matrix A of 3 %dx%d: \n", 3, 3);
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("\nEnter elements in matrix B of 3 %dx%d: \n", 3, 3);
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            sum = 0;
            for(i=0; i<3; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }
    printf("\nProduct of matrix A * B = \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
    return 0;
}
