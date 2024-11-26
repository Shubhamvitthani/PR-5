#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Rows :");
    scanf("%d", &row);

    printf("Enter Column :");
    scanf("%d", &col);

    int a[row][col], r, c, sum1 = 0 , sum2 = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Elements [%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nEnter Row :");
    scanf("%d", &r);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == r)
            {
                printf("%d ",a[i][j]);
                sum1 += a[i][j];
            }
        }
    }

    printf("Sum Is Row : %d\n\n", sum1);

    printf("Enter Col :");
    scanf("%d",&c);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == c)
            {   
                printf("%d ",a[i][j]);
                sum2 += a[i][j];
            }
        }
    }

    printf("Sum Is Col:- %d", sum2);
}