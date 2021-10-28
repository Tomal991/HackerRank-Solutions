
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//#define SIZE 3

int main()
{
    int A[100][100];
    int row, col, sum1 = 0,sum2=0,sub=0,n;
    scanf("%d",&n);
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            scanf("%d", &A[row][col]);
            if(row==col)
                sum1 = sum1 + A[row][col];


            if(row+col == n-1)
            {
                sum2 += A[row][col];
            }
        }

    }

    sub=abs(sum1-sum2);

    printf("\n Absolute difference of the sums of the matrix's two diagonals as a single integer = %d", sub);

    return 0;
}
