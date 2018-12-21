#include <stdio.h>
#include <stdlib.h>

void swapDemo(int a,int b)
{
    //int *p=&a int *p1=&b
    *p=*p+*p1;
    b=a-b;
    a=a-b;

    printf("value of a : %d\n",a);//a=20
    printf("value of b : %d\n",b);//b=10
}


int main()
{
       int a, b;
        printf("enter the value of a and b : ");
        scanf("%d%d",&a,&b);//a=10 b=20
        swapDemo(a,b);

    /*int a=10;
    int* p=&a;
    printf("Value of a = %d\n",a);//value of a
    printf("Address of a = %p\n",&a);//address of a
    printf("value of p = %p\n",p);//value of p
    printf("pointer of p = %d\n",*p);//pointer value of p
    printf("Address of p = %p\n",&p);//pointer value of p
*/

    return 0;
}
