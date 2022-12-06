#include<stdio.h>

void main()
{
    int age;
    printf("Enter Age");
    scanf("%d",&age);
    printf("Entered Age = %d\n",age);
    if(age>18)
    {
        printf("You are Elligible");
    }
    else if (age==18){
        printf("!8 years old");
    }

    else
    {
        printf("Not elligible");
    }
    getch();
}