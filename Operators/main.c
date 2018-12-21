#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a=10;
    int b=a++;//a=11 b=10
    int c=(a++)+(b++);//c=21 a=12 b=11
    int d=(++b)+(a++)+(++c);//b=12 a=13 c=22 d=46
    printf("a : %d ",a);//a=13
    printf("b : %d ",b);//b=12
    printf("c : %d ",c);//c=22
    printf("d : %d ",d);//d=46

    return 0;
}
