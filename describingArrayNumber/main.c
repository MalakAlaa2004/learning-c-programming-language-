#include <stdio.h>
#include <stdlib.h>
int foo(int[]);
int main()
{
    int f[10];
    int i=0,m;
    printf("Hello !\n");
    for (i=0;i<10;i++)
    {
        printf("please enter the element number %d\n",i+1);
        scanf("%d",&f[i]);

    }
    m=foo(f);
    if(m==1)
        printf("the numbers in the array are increasing.\n");
    if(m==2)
        printf("the numbers in the array are decreasing.\n");
    if (m==3)
        printf("the numbers in the array are not changing .\n");
    else
        printf ("the numbers in the array are increasing then decreasing.\n");
printf ("have a nice day \n");
return 0;
}
//function built
int foo(int f[])
{
    int i =0,x=0,sum=0,z=0,l=0;
    for (i=0;i<10;i++)
    {
        if (f[i]=f[i+1])
           {
                   x=1;
                  sum+=x;
          }
          if(sum==10)
            return 3;
    }

    for (i=0;i<10;i++)
    {
        if (f[i]<f[i+1])
            l=0;
        if(f[i]<f[i+1])
            l=1;
     z+=l;
    }
    if (z==0)
        return 1;
    if (z==10)
        return 2;
    else
        return 4;
}
