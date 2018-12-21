#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" 1.  add\n 2. sub\n");
    int choice;
    scanf("%d",&choice);
    printf("Enyter the value of a and b : ");
    int a,b,result;
    scanf("%d%d",&a,&b);
    switch(choice)
    {
        case 1:
                result=a+b;
                printf("result : %d",result);
                break;
        case 2:
                result=a-b;
                printf("result : %d",result);
                break;

        default:
            printf("Invalid CHOICE");
            break;

    }
    return 0;
}
