#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100];
    int row , col , i , j, sum=0 ,maxsum=-1,maxSumRow;
    printf("Hello world!\n");
    printf ("please select number of colum\n");
    scanf("%d",&col);
    printf("please select number of rows\n");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter element [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    i=0;
    while (i!=row){
            for(j = 0; j < col; j++)
                {
         sum += a[i][j];
      }
      if(sum > maxsum){
         maxsum = sum;
         maxSumRow = i;
      }
      i++;
   }
   printf("the maximum sum row is %d",maxSumRow);

    return 0;
}
