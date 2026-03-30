#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size ,value,i;
    char menu;
    int brr[100];
    printf("Hello\n please enter array size :\n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("element %d",i+1);
        scanf("%d",&brr[i]);
    }
    printf("do you want to delete any element if yes type y and an n for no please\n");
    scanf("%c",&menu);
    getchar();  // Flush the input buffer

    switch (menu)
    {
    case 'y':case'Y':
        getchar();  // Flush again
        printf("please enter the value you wanna delete \n");
        scanf("%d",&value);
        for(i=0;i<size-1;i++){
            if(brr[i]==value)
                break;}
        for (;i<size-1;i++)
            brr[i]=brr[i+1];
        for(int j=0;j<size-1;j++)
            printf("%d\n",brr[j]);
        break;
    case 'n':case'N':
        printf("thank you\n");
        break;
    }
printf("have a nice day:)\n");
    return 0;
}
