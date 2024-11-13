/*Write a C program that checks whether a student has passed or failed based on their percentage*/

#include<stdio.h>

void resultcheck(float fmarks)
{
    if (fmarks>100)
    {
       printf("Plz enter marks under in rage of 0-100\n"); 
       return;   
    }
    
    if (fmarks>=40.00f)
    {
       printf("You are Passed :)\n");
    }
    else
    {
         printf("You are failed \n");
    }
    
}
int main()
{

    float fmarks=0.0f;

    printf("Enter marks\n");
    scanf("%f",&fmarks);

    resultcheck(fmarks);

    return 0;
}
