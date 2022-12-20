#include<stdio.h>
void main()
{
    int temp;
    printf("Enter the temp\n");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("Frezzing Weather");
    }
    else if(temp>=0&&temp<10)
    {
        printf("Very Cold Weather");
    }
    else if(temp>=10&&temp<20)
    {
        printf("Cold Weather");
    }
     else if(temp>=20&&temp<30)
    {
        printf("Normal in temp");
    }
     else if(temp>=30&&temp<40)
    {
        printf("Hot");
    }
     else if(temp>=40)
    {
        printf("Very Hot");
    }
    else{
        printf("Wrong\n");
    }

}
