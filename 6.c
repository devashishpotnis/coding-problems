/*
Calculate the percentage
*/

#include<stdio.h>


float findpercentage(int TMmarks,int OBmark)
{
    float Percentage=0.0f;
    Percentage=((float)OBmark/TMmarks)*100; //we use type casting to perform this application
    return Percentage;

}
int main()
{
    int TMmarks=0, OBmark=0;
    float Percentage=0.0f;

    printf("Enter Total marks\n");
    scanf("%d",&TMmarks);

    printf("Enter Obtained marks\n");
    scanf("%d",&OBmark);

    Percentage=findpercentage(TMmarks,OBmark);
     printf("Your Percentage is %f\n",Percentage);



    return 0;

}