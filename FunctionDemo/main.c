#include <stdio.h>
#include <stdlib.h>

int addition(int a,int b)
{
    //printf("addition : %d\n",a+b);

    return a+b;


}
int sub(int a,int b)
{
    return a-b;

}
int divion(int a,int b)
{
    return a/b;

}
int mul(int a,int b)
{
    return a*b;

}

void showData(int* i)
{
  /*  if(i<=4)
    {
    int array[]={1,2,3,4,5};
    printf("array : %d\n",array[i]);
    i++;
  showData(i);
*/
printf("value of a: %d\n",*i);


}

int main()
{
    int a=10;
    showData(&a);
    /*int x,y;
    for(int i=5;i>0;i--)
    {
    printf("enter the value of x and y : ");
    scanf("%d%d",&x,&y);
    printf("addition : %d\n",addition(x,y));
    printf("sub : %d\n",sub(x,y));
    printf("mul : %d\n",mul(x,y));
   }*/
   return 0;

    }
