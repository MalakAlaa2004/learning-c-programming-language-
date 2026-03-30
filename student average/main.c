#include <stdio.h>
#include <stdlib>
void average ();
int n;
int main()
{
    int foo[1000][5];
    int i=0,x;
    printf("Hello !\n");
    printf("please enter number of student \n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(x=0,x<5,x++)
        printf("please enter number:%d , grade of subject number: %d\n",i+1 ,x+1);
        scanf("%d",&foo[i][x]);
    }
    //functions call
    average(foo);
    return 0;//end of the program
}
//the average function
void average(int foo[][])
{
    float z;
    int sum=0;
    int i=0,x=0;
    for (i=0;i<n;i++){

        for(x=0,x<5;x++)
    {
        sum+=foo[i][x];
         z=sum/5.0;
    printf ("the average of student number %d is %d\n",i+1,z);
    }
    sum=0;
    z=0;
    }
}
