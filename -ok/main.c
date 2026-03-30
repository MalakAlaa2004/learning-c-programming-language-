#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;
    printf ("hello , can you please enter the number of rows you would like in your pyramids \n");
    scanf("%d",&rows);

    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
