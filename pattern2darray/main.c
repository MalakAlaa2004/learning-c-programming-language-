#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j;
    printf("hello!\n");
    int f[5][5]={{0,1,1,1,1},{-1,0,1,1,1},{-1,-1,0,1,1},{-1,-1,-1,0,1},{-1,-1,-1,-1,0}};
    for(i=0;i<5;i++)
    {
    {for(j=0;j<5;j++)
    printf("\t%d\t",f[i][j]);
    }
    printf("\n");
    }

    return 0;
}
