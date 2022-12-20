#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    ((year%100!=0&&year%4==0)||year%400==0)?printf("Leap Year"):printf("Not a leap year");
    return 0;
}
