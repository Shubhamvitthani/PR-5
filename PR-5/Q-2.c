#include <stdio.h>

main()
{
    int row, col;

    printf("Enter rows :");
    scanf("%d", &row);

    printf("Enter colums :");
    scanf("%d", &col);

    int a[row][col], b[row][col];

    for (int s = 0; s<col; s++)
    {
        for (int v = 0; v<col; v++)
        {
            printf(" Enter Elements [%d][%d] : ", s, v);
            scanf("%d", &a[s][v]);
        }
    }

    int larg = 0;
    for (int s = 0; s<row; s++)
    {
        for (int v = 0; v<col; v++)
        {
            if (a[s][v] > larg)
            {
                larg = a[s][v];
            }
        }
    }

    printf("\n\nThe Larg Element is : %d", larg);
}