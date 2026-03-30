#include <stdio.h>
#include <stdlib.h>
typedef struct name{
int age;
float salary;
char name[100];
}info;
int main()
{
    info *ptr;
    int i,n;
printf("enter n:\n");
scanf("%d",&n);
ptr=(info*)malloc(n*sizeof(info));
for (i=0;i<n;i++)
{
    getchar();
    printf("enter name:\n");
    gets(ptr->name);
    printf("age\n");
    scanf("%d",&ptr->age);
    printf("salary\n");
    scanf("%f",&ptr->salary);

}
printf("saved informations\n");
for(i=0;i<n;i++)
{
    printf("name:%s\t age:%d\t salary %.2f\n",(ptr+i)->name,(ptr+i)->age,(ptr+i)->salary);
}

    return 0;
}
