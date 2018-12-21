#include <stdio.h>
#include <stdlib.h>

int getData(int number)
{
    static int result=0;
    result+=number;//result=result+number;
    return result;

}

int main()
{
    int number;
    for(int i=0;i<5;i++)
    {
        printf("Enter the number : ");
        scanf("%d",&number);
        printf("result : %d\n",getData(number));
    }
    return 0;
}
