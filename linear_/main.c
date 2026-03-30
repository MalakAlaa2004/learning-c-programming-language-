#include <stdio.h>
#include <stdlib.h>
int linear_search(int *ptr,int size,int key)
{
    int count =0,k=0;
    for (int i=0;i<size ;i++)
    {
        if(ptr[i]==key)
        {
            k=i;
            count++;
        }
    }
    if(count==1)
        return k;
    if(count==0)
        return -1;
    else {
        printf("this element has been repeated %d times\n",count);
        printf("we found it in element number ");
        for(int z=0;z<size;z++)
        {
            if(ptr[z]==key)
            printf("%d\t",z+1);

        }

        return -2;
    }
}
int main(){

int arr[1000];
int size;
int key;
int k;
printf("Hello!\n pls enter array size\n");
scanf("%d",&size);
for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
printf("please enter the element you want to search for pls\n");
scanf("%d",&key);
k=linear_search(arr,size,key);
if(k==-1)
printf("not found");
if(k==-2)
    printf("\n");
else
    printf("element is in element number %d",k+1);
printf("thank you\n");

    return 0;
}
