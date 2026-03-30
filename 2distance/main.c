#include <stdio.h>
#include <stdlib.h>
struct distance
{
    int feet;
    int inch;
}d1,d2,sum;
int main()
{
    int inchsum=0, feesum=0;
    printf("Hello !\n");
    printf("1 st distances\n please enter distance in feet and inches respectivley \n");
    scanf("%d %d",&d1.feet,&d1.inch);
    printf("2nd distance\n pls enter distances in feet and inchs respectivly \n");
   scanf("%d %d",&d2.feet,&d2.inch);
   sum.inch=d1.inch+d2.inch;
   sum.feet=d1.feet+d2.feet;
    inchsum=(sum.feet*12)+sum.inch;
    feesum=(sum.inch/12)+sum.feet;
    printf("sum of distance in feet is %d \n sum of distance in inchs is %d\n",feesum,inchsum);
    return 0;
}
