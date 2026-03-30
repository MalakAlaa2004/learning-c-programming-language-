#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
        FILE *fptr1,*fptr2;
        fptr1=fopen("text1.txt.txt","r+");
        fptr2=fopen("text2.txt.txt","w+");
        if(fptr1==NULL||fptr2==NULL)
            printf("could not open the file \n");
        else
        {
            char f1[1000];
            fread(f1,sizeof(char),1000,fptr1);
            for(int i=0;i<strlen(f1);i++)
            {
                if(f1[i]>='A'||f1[i]<='z')
                    fprintf(fptr2,"%c",f1[i]);
            }
        }
    return 0;
}
