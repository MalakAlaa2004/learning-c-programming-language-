#include <stdio.h>
#define NUM 1000//array limit
int x;
int isArrayAssending(int [] );
int main()
{
    int s[NUM];
    int i,m ,r;
    printf("Hello!\n");
    for(m=0;;m++){
    printf("please enter the number of element in your array \n");
    scanf("%d",&x);
    //array limit check
    if(x>NUM)
    {
        printf ("the array can not support %d element please enter a number less than 1000\n");
    }
    break ;
    }
    for(i=0;i<x; i++)
   {
    printf ("enter element %d \n",i+1);
    scanf("%d",&s[i]);
    }
    r=isArrayAssending(s);
    if(r==1)
        printf("the array is in ascending order \n");
    else
        printf ("not in ascending order\n");
    printf("thank you!");

    return 0;
}//end of program
//function built
int isArrayAssending(int s[])
{
    int a=1,i=0;
    while (a==1&&i<x-1)
    {
        if(s[i]>s[i+1])
        {
            a=0;
        }
        i++;
    }
    if(a==0)
        return 1;
    else
        return 2;
}
