#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arra[100];
    int size,value,position;
    printf("Hello\n please enter the array size\n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("element num%d",i+1);
        scanf("%d",&arra[i]);
    }
    printf("please enter the value you want to insert \n");
    scanf("%d",&value);
    printf("please enter the position you want to insert it on it\n");
    scanf("%d",&position);
    for(int c=size-1;c>=position-1;c--)
    arra[c+1]=arra[c];
    arra[position-1]=value;
    printf("the array after insertion\n");
    for(int j=0;j<size+1;j++)
        printf("%d\t",arra[j]);
    return 0;
}
