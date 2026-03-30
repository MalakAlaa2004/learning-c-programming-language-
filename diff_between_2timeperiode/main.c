#include <stdio.h>
#include <stdlib.h>
#include<math.h>
struct time{
int hour;
int min;
int sec;
}start,end,sum;
int main()
{
    printf("Hello\n");
    printf("enter start time please\n following the same sequence hours \t min \t sec\n");
    scanf("%d %d %d",&start.hour,&start.min,&start.sec);
    printf("enter the end time please\n following the same sequence hours\t min\t sec\n");
    scanf("%d %d %d",&end.hour,&end.min,&end.sec);
    sum.hour=abs(end.hour-start.hour);
    sum.min=abs(end.min-start.min);
    sum.sec=abs(end.sec-start.sec);
    printf("difference between %d:%d:%d and%d:%d:%d is %d:%d:%d",start.hour,start.min,start.sec,end.hour,end.min,end.sec,sum.hour,sum.min,sum.sec);
    return 0;
}
