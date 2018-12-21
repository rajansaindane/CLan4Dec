#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter the value of i : \n");
    scanf("%d",&i);

  /*  if(i%2==0)
    {
    printf("Even Number\n");
    }
    else{
    printf("Odd Number\n");
    }*/

    if(i<35)
    {
    printf("Fail\n");
    }
    else if(i>=35 && i<60)
    {
        printf("Pass\n");
    }
    else if(i>=60 && i<75)
    {
        printf("Fistclass\n");
    }
    else{
        printf("Invalid\n");
    }

    return 0;
}
