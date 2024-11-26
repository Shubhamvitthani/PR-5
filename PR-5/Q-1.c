#include <stdio.h>
main()
{
    int size;

    printf("Enter Size :");
    scanf("%d", &size);

    printf("\n\n");

    int a[size];

    for (int s = 0; s < size; s++)
    {

        printf("Enter Element [%d]:", s + 1);
        scanf("%d", &a[s]);
    }

    printf("\n\nNegative Number :");

    for (int s = 0; s < size; s++)
    {
        if (a[s] < 0)
        {
            printf("%d,", a[s]);
        }
       
    }
}