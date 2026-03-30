#include <stdio.h>
#include <stdlib.h>
int members;
typedef struct student
{
    char name [230];
    int age;
}student;
student *ptr,fptr[100];
void desplayinfo(student*ptr);
int main()
{
    ptr=&fptr;
    printf("Hello \n");
    printf("pls enter the number of member you gonna enter :\n");
    scanf("%d",&members);
    for(int i=0;i<members;i++)
    {
        getchar();
        printf("name of member number %d:\n",i+1);
        fgets(((ptr+i)->name),230,stdin);
        printf("age is:\n");
       scanf("%d",&(ptr+i)->age);
    }
    desplayinfo(ptr);
    return 0;
}
void desplayinfo(student *ptr)
{
    for(int i=0;i<members;i++)
    {
        printf("name is%s\n age is %d\n",(ptr+i)->name,(ptr+i)->age);
    }
}
