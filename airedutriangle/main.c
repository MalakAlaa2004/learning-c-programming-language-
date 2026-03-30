#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,height,area;
    printf("Hello!\n");
    printf("enter the value of the base\n");
    scanf("%f",&base);
    printf("Enter the height value \n");
    scanf("%f",&height);
    area=0.5*height*base;
    printf("the area is %f\n",area);
    return 0;
}
