#include <stdio.h>
#include <stdlib.h>

int main( int argc,char *argv[])
{
    if(argc!=3)
        printf("insufisent info\n");
    else{
    int x,y,power=1;
    x=argv[1][0]-'0';
    y=argv[2][0]-'0';
    for(int i=1;i<=y;y++)
        power*=x;
    printf("\t%d",&power);
    }
}
