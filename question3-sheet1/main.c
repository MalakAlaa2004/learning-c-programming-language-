#include<stdio.h>
               int difference(int,int);
                int main()
                {   int num,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,max,min;
                    printf("input ten integer values:\n");
                    for(int counter=1 ; counter<=10 ; counter++)
                    {   printf("number-%d: ",counter);
                        scanf("%d",&num);
                        if(counter==1)
                        {   min=num;
                            max=num;
                            num1=num;
                        }
                        else
                        {   if(counter==2)
                                num2=num;
                            if(counter==3)
                                num3=num;
                            if(counter==4)
                                num4=num;
                            if(counter==5)
                                num5=num;
                            if(counter==6)
                                num6=num;
                            if(counter==7)
                                num7=num;
                            if(counter==8)
                                num8=num;
                            if(counter==9)
                                num9=num;
                            if(counter==10)
                                num10=num;
                            if(num>max)
                                max=num;
                            else
                            {  if(num<min)
                                min=num;
                            }
                        }
                    }   printf("\n");
                        printf("the ten values are:\n");
                        printf("the number-1: %d\nthe number-2: %d\nthe number-3: %d\nthe number-4: %d\nthe number-5: %d\nthe number-6: %d\nthnumber-7: %d\nthe number-8: %d\nthe number-9: %d\nthe number-10: %d\n",num1,num2,num3,num4,num5,num6,num7,num8,num9,num10);
                        printf("the greatest is %d and smallest is %d and the difference between them is %d",max,min,difference(max,min));
                }
                int difference(int max, int min)
                {
                    return max-min;
                }
