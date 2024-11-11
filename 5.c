/*find radius of circle by using function and accepet no from user*/

#include<stdio.h>
float radiusfun(float radius)
{
    return 3.14*radius*radius;
}

int main()
{
    float fradius=0,farea=0;

    printf("Enter Radius of circle is\n");
    scanf("%f",&fradius);

    farea=radiusfun(fradius);
    printf("The are of circle is %f\n",farea);

    return 0;

}