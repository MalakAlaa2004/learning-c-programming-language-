#include <stdio.h>
#include <stdlib.h>
int bin_search(int *ptr, int min, int max, int kay) {
    if (max < min) {
        return -1;
    }
    int middle = (max + min) / 2;
    if (ptr[middle] == kay) {
        return middle;
    } else if (ptr[middle] > kay) {
        return bin_search(ptr, min, middle - 1, kay);
    } else {
        return bin_search(ptr, middle + 1, max, kay);
    }
}
int main()
{
    int key,k;
    int size ;
    int arr[1000];
    printf("Hello!\n please enter array size \n");
    scanf("%d",&size);
    printf("enter array element:\n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("please enter the element you want to search for :\n");
    scanf("%d",&key);
    k=bin_search(arr,0,size,key);
    if(k==-1)
        printf("not found");
    else
        printf("element %d is found in element with index %d\n",key ,k);
    return 0;
}
