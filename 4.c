/*addition of two numbers by using function*/

#include<stdio.h>

int addition(int no1,int no2)
{
    int ans=0;
    ans=no1+no2;

    return ans;

}

int main()
{
    int ino1=0,ino2=0,ians=0;

    printf("Enter 1st No\n");
    scanf("%d",&ino1);

    printf("Enter 2nd No\n");
    scanf("%d",&ino2);

    ians=addition(ino1,ino2);
    printf("The addition is :%d\n",ians);

    return 0;

}