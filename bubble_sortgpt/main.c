#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int *ptr,int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int z=0;z<size-1-i;z++)
        {
            if(ptr[z]>ptr[z+1])
            {
                temp=ptr[z];
                ptr[z]=ptr[z+1];
                ptr[z+1]=temp;
            }
        }
    }
}
int main()
{
    int ptr[100],size;
    printf("Hello!\n");
    printf("please enter the size of the array pls:\n");
    scanf("%d",&size);
    for (int j=0;j<size;j++){
    printf("enter aray elemnet %d:\t",j+1);
    scanf("%d",&*(ptr+j));}
    bubble_sort(ptr,size);
    printf("sorted array is equal to\n");
    for(int j=0;j<size;j++)
        printf("%d\t",ptr[j]);

      return 0;
}
