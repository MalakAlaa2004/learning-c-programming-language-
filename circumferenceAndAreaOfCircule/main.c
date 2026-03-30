#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
float ci ;
int main()
{
    printf("Hello!\n");
    printf("this program calculate the area and cicumference of a circle using its radius \n");
   int rad;
   float z;
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
   z=area(rad);
   printf("\nArea of circle : %f ", z);
    printf("\nCircumference : %f ", ci);
return 0;
}
float area(int rad)
  {
   float z;
   z = PI * rad * rad;
   ci = 2 * PI * rad;
    return z;
  }
