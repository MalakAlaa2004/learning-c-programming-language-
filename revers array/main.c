#include <stdio.h>
#include <stdlib.h>
void reverse_arr(int arr[],int size);
int main()
{
    int arr[100];
    int size;
    printf("Hello!\n please enter array size\n");
    scanf("%d",&size);
    printf("please enter array element respectively\n");
    for(int i=0;i<size;i++)
    {
        printf(" number %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    reverse_arr(arr,size);
    printf("the reversed array is\n");
    for(int i=0;i<size;i++)
    printf("%d\t",arr[i]);
    return 0;
}
void reverse_arr(int arr[],int size)
{
    int c,end=size-1,temp;
    for(c=0;c<size;c++)
    { temp=arr[c];
        arr[c]=arr[end];
        arr[end]=temp;
        --end;
    }
}
