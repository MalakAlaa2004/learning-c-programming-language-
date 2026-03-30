#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr=fopen("file.txt","r+");
    if(fptr==NULL)
    printf("opps....could not open the desired file\n try again later please\n");
    else{
        char x;
        x=fgetc(fptr);
        while (x!=EOF){
        printf("%c",x);
        x=fgetc(fptr);
        }
        fclose (fptr);
        }
    return 0;
}
