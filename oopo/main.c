#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
 int num1 , num2, p ,s,total;
 printf("hello!\n");
 printf("please enter the value of:\n");
 printf("x:\n");
 scanf("%d",&num1);
 printf("y:\n");
 scanf("%d",&num2);
 p=num1*num2;
 s=num1+num2;
total=pow(s,2)+p*(s-num1)*(p+num2);
 printf("the total is %d\n",total);
printf("thanks\n");
    return 0;
}
