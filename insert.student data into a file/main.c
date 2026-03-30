#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[100];
    int id;
    struct birthday {
        int day;
        int month;
        int year;
    } bd;
    int grade;
};

struct student info[1000];

int main()
{
    int i=0,size;
    char index[100];
    int temp,x,y,m,n;
    printf("Hello!\n");
    printf("please enter the number of students you want to record\n");
    scanf("%d",&size);

    if (size > 1000) {
        printf("Error: too many students!\n");
        return 1;
    }

    for(i=0;i<size;i++)
    {
        getchar();
        printf("please enter the student name\n");
        fgets(info[i].name, 100, stdin); // safer than gets()
        printf("please enter the student birthday date\n");
        scanf("%d %d %d",&info[i].bd.day,&info[i].bd.month,&info[i].bd.year);
        printf("please enter the student id\n");
        scanf("%d",&info[i].id);
        printf("please enter the student grade\n");
        scanf("%d",&info[i].grade);
    }

    for(int j=0;j<size;j++)
    {
        for (int k=0 ; k<size-1-j;k++){ // fixed inner loop index
            if(info[k].grade<info[k+1].grade)
            {
                temp=info[k].grade;
                info[k].grade=info[k+1].grade;
                info[k+1].grade=temp;

                strcpy(index,info[k].name);
                strcpy(info[k].name,info[k+1].name);
                strcpy(info[k+1].name,index);

                x=info[k].bd.day;
                info[k].bd.day=info[k+1].bd.day;
                info[k+1].bd.day=x;

                y=info[k].bd.month;
                info[k].bd.month=info[k+1].bd.month;
                info[k+1].bd.month=y;

                m=info[k].bd.year;
                info[k].bd.year=info[k+1].bd.year;
                info[k+1].bd.year=m;

                n=info[k].id;
                info[k].id=info[k+1].id;
                info[k+1].id=n;

            }
        }
    }

    FILE *fptr;
    fptr=fopen("text1.txt","w+");
    if(fptr==NULL) {
        printf("Error: cannot save entered data in file 'text1.txt', please try again later\n");
    } else {
        fprintf(fptr,"name \t birthday\t id\t grade\n");
        for(int k=0;k<size;k++) {
            fprintf(fptr,"%s\t %d\\%d\\%d\t%d\t%d\n",info[k].name,info[k].bd.day,info[k].bd.month,info[k].bd.year,info[k].id,info[k].grade);
        }
        fclose(fptr);
    }
    return 0;
}
