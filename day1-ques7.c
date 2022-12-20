#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a == b && b == c)
      printf("The Given Triangle is equilateral");
   else if(a == b || b == c || c == a)
      printf("The given Triangle is isosceles");
   else
      printf("The given Triangle is scalene");
}
