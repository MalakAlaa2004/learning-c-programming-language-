#include <stdio.h>
#include <stdlib.h>
int z=0;
typedef struct birthday
{
    int day;
    int mounth;
    int year;
}bd;
typedef struct information{
char name[100];
int age ;
int id;
int salary;
bd birth;
int task_id[5];
}info;
info employee[1000];
int search(int key ,int num)
{
    for( z=0;z<num;z++)
    {
        if(key==employee[z].id)
            return 1;
        else
            return -1;
    }
}
int main()
{
    int num,key;
    printf("Hello!\n");
    printf("please enter the number of employee you want to search for \n");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        getchar();
        printf("employee name:\n");
        fgets(employee[i].name,100,stdin);
        printf("employee date of birth following the formate day month year\n");
        scanf("%d %d %d",&employee[i].birth.day,&employee[i].birth.mounth,&employee[i].birth.year);
        printf("employee age\n");
        scanf("%d",&employee[i].age);
        printf("employe id\n");
        scanf("%d",&employee[i].id);
        printf("employee salary\n");
        scanf("%d",&employee[i].salary);
        for(int k=0;k<5;k++){
        printf("employee task id %d",k+1);
        scanf("%d",&employee[i].task_id[k]);
        }
    }
    printf("enter the id of the employee you want to search for\n");
    scanf("%d",&key);
    if((search(key,num))==1){
       printf("the searched employee is \n");
    printf("name:%s\t birth day :%d/%d/%d\t age:%d\t salary :%d\t id:%d\n",employee[z].name,employee[z].birth.day,employee[z].birth.mounth,employee[z].birth.year,employee[z].age,employee[z].salary,employee[z].id);
    }
    else
        printf("not found\n");
    return 0;
}
