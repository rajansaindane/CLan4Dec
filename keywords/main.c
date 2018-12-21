#include <stdio.h>
#include <stdlib.h>
static int x=0;


void statFun()
{
     int y=0;
    y+=1;
    printf("%d",y);
    printf("%d",x);
}

int main()
{
    int z=0;
    while(z<5)
    {
    statFun();
    z++;
    }
        printf("%d",x);

  /*  for(int i=0;i<10;i++)
    {
    if(i==5  || i==3 || i==4)
    {
    continue;//break;
    }
  printf(" i :  %d\n",i);

    }*/

  /*  int age;
    viraj :
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age<18)
    {
    printf(" You are under 18 Not Applicable for vote\n");
    goto viraj;
    }
    else if(age>=18 && age <65)
    {
        printf(" Applicable for vote\n");
    }
    else
    {
        printf("Not Applicable for vote\n");
        goto viraj;
    }*/


    return 0;
}
