/*
Find radius of circle and accept value from user
  //3.14*r*r
*/

#include<stdio.h>

int main()
{
    float fradius=0;
    float farea=0;

    printf("Enter The radius of circle\n");
    scanf("%f",&fradius);

    farea=3.14*fradius*fradius;
    printf("Area of circle is:%f\n",farea);


    return 0;
}