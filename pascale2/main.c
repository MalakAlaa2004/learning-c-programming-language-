#include <stdio.h>
#include <stdlib.h>

int main()
{
    int foo[10][10]={0};
    int row,i,j;
    printf("Hello\n please enter the num of rows\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==j)
               foo[i][j]=1;
               else
            foo[i][j]=foo[i-1][i-j]+foo[i-1][i-j+1];
        }
    }
    for(i=1;i<row;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",foo[i][j]);
        printf("\n");
    }
    return 0;
}
