#include <stdio.h>
#include <stdlib.h>
int sumOdd;
int sumEven(int[]);
int main()
{
    int f[10];
    int i=0,r;
    printf("Hello !\n");
    for (i=0;i<10;i++){
    printf("please enter number %d\n",i+1);
    scanf("%d",&f[i]);
    }
    r=sumEven(f);
    printf ("the sum of array`s odd number is equal to %d\n",sumOdd);
    printf("the sum of array`s even number is equal to %d\n",r);
    printf("have a nice day \n");
    return 0;
}
//function built
int sumEven(int f[])
{
    int sum=0,i;
    sumOdd=0;
    for (i=0;i<10;i++)
    {
        if(f[i]%2==0)
            {
                sum+=f[i];
        }
        else
            sumOdd+=f[i];

    }
    return sum ;
}
