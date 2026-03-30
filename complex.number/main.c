#include <stdio.h>
#include <stdlib.h>
typedef struct number
{
 int real;
 int complex;
}num;
num *ptr,p[100];
void display_info(num*ptr,int size);
int main()
{
    int size;
    ptr=&p;
    printf("pls enter the dnumber of element you gonna entwer\n");
    scanf("%d",&size);
for(int i=0;i<size;i++)
{
    printf("number %d",i+1);
    printf("the raeal part :\n");
    scanf("%d",&(ptr+i)->real);
    printf("imaginary part is:\n");
    scanf("%d",&(ptr+i)->complex);

}
display_info(ptr,size);
    return 0;
}
void display_info(num*ptr,int size)
{
    for (int i=0;i<size ;i++)
    printf("the number number %d is = %d+%di\n",(i+1),(ptr+i)->real,(ptr+i)->complex);
}
