#include<stdio.h>
void main()
{
    int choice,v;
    printf("Enter the alphabet\n");
    scanf("%d",&v);
    printf("Enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:v='a';
        break;
        case 2:v='e';
        break;
        case 3:v='i';
        break;
        case 4:v='o';
        break;
        case 5:v='u';
        break;
        default:
            printf("Consonants\n");
    }
}

