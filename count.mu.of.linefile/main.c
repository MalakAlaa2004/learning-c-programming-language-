#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr=fopen ("file.txt","r");
    if(ptr==NULL)
        printf("oppps....,an error hapenning while trying to open the file\n");
    else
    {
        int line=0;
        char x;
        x=fgetc(ptr);
        while(x!=EOF)
        {
            if(x=='\n')
                line++;
            x=fgetc(ptr);
        }
        printf("number of line  existed equal to %d lines",line);
        fclose(ptr);
    }
    return 0;
}
