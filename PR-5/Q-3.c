#include <stdio.h>

main()
{
    int row,col;

    printf("Enter Row :");
    scanf("%d",&row);

    printf("Enter Column :");
    scanf("%d",&col);

    int array[row][col];
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter Elements [%d][%d]:-",i,j);
            scanf("%d",&array[i][j]);
        }

        printf("\n");
    }

    printf("transpose is :\n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",array[j][i]);
        }

        printf("\n");
    }

    printf("\n\n");

}