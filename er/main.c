#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Hello !\n");
    printf("please enter your grade \n");
    scanf("%d",&grade);

    if(grade>=90){
        printf("A\n");
    }
    if((grade>=70)&&(grade<90)){
        printf("B\n");
    }

    if((grade>=50)&&(grade<70)){
        printf ("C \n");
    }
    if((grade<50)){
        printf(" F \n");
    }
    else{
        printf("invalide grade\n");
    }
    printf ("good bye !\n");
    return 0;
}
