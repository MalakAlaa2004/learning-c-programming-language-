#include <stdio.h>
#include <stdlib.h>
struct info
{
    char name[123];
    int age;
    int id;
}*ptr,p;
int main()
{
   ptr=&p;
    printf("Hello!\n");
    printf("please enter your age\n");
    scanf("%d",&ptr->age);
    getchar();
    printf("please enter your name\n");
    gets(ptr->name);
    getchar();
    printf("please enter your id \n");
    scanf("%d",& ptr->id);
    printf("the saved information are :\n name:%s\n \n age:%d\n id%d\n",ptr->name,ptr->age,ptr->id);
    return 0;
}
