#include<stdio.h>

void main()
{
    int n;
    printf("Enter no ");
    scanf("%d",&n);
    printf("Enterd no = %d\n",n);
    switch (n)
    {
    case 1 :
        /* code */
        printf("one");
        break;
    case 2:
    printf("two");
    break;
    default:
    printf("Invalid");
        break;
    }
    //table();

}