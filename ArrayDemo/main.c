#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int sizeOfArray=0;
    printf("Enter the size of array : ");
    scanf("%d",&sizeOfArray);

    int array[sizeOfArray];

    for(int j=0;j<sizeOfArray;j++)
    {
        printf("enter the value at %d :  ",j);
        scanf("%d",&array[j]);

    }
    printf("Values of arrays : \n");
    for(int i=0;i<sizeOfArray;i++)
    {
    printf("array = %d\n",array[i]);
    }*/

    int rajan=10;

    printf("rajan = %d \n",rajan);

    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                    printf(" %d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

1 2 3
4 5 6
7 8 9

