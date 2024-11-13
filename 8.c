#include<stdio.h>

void displaytimetable(int istd)
{
    switch (istd)
    {
    case 8:
    printf("Your exam is scheduled on 8AM\n");
    break;

    case 9:
    printf("Your exam is scheduled on 9AM\n");
    break;

    case 10:
    printf("Your exam is scheduled on 10AM\n");
    break;
    
    default:
     printf("No exam in today");

        break;
    }
}

int main()
{
    int istd;
    printf("Enter your standard\n");
    scanf("%d",&istd);

    displaytimetable(istd);


    return 0;
}