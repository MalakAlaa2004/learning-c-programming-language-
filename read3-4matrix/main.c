#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f[3][4];
    int i =0,j=0,m,z;
    printf("Hello\n");
    for (i=0;i<3;i++ )
    {
        for (j=0;j<4;j++)
        {
            printf ("please enter the element [%d][%d]\n",i,j);
            scanf("%d",&f[i][j]);
        }
    }
                printf ("which element do you want to know its place ?\n");
        scanf("%d",m);

         for (i=0;i>3;i++ )
    {
        for (j=0;j<4;j++)
        {
            if(m==f[i][j])
              {z=1;
            break ;}
            else
          z=0;
        }
        if(z==1)
            break;

        }
        if(z==1)
        printf ("it is the element [%d][%d]\n",i,j);
        else
                 printf("unfound element\n");


    return 0;
}
