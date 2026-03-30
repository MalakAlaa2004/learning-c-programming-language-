#include <stdio.h>
#include <stdlib.h>
int max();
int min();
float average ();
int x,k, y;
float z;
int main()
{
    int foo[1000000];
    int i=0;
    printf("Hello !\n");
    printf ("please enter the lengh of the array \n");
    scanf("%d",&k);
    for (i=0;i<k;i++)
    {
        printf("please enter number %d\n",i+1);
        scanf("%d",&foo[i]);
    }
    //functions call
    max(foo);
    min(foo);
    average(foo);
    //printing the results
    printf("the maximum number is %d\n",x);
    printf ("the minimum number is %d \n",y);
    printf("the average is %f\n",z);
    printf("thank you , have a nice day \n");
    return 0;//end of the program
}
//the max function
int max(int foo[])
{
    int i=0;
    x=0;
    for (i=0;i<k;i++)
    {
        if(x<foo[i])
        {
            x=foo[i];
        }
    }
    return x;
}
//the min function
int min (int foo[])
{
    int i=0;
    y=0;
    for (i=0;i<k;i++)
    {
        if(y>foo[i])
        {
            y=foo[i];
        }
    }
    return y;
}
//the average function
float average(int foo[])
{
    int sum=0;
    int i=0;
    for (i=0;i<k;i++)
    {
        sum+=foo[i];
    }
    z=sum/10.0;
    return z;
}

