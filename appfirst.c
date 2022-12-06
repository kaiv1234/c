#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

void sumation(int a,int b)
{
    int c;
    c=a+b;
    printf("Addition = %d\n",c);
}
void subtract(int a, int b)
{
    int c;
    c=a-b;
    printf("Subtraction = %d\n",c);
}

// void avarage()
// {
//     continue;
// }

void multi(int a, int b)
{
    int c;
    c=a*b;
    printf("Multiply = %d\n",c);
}

void divide(int a, int b)
{
    int c;
    c=a/b;
    printf("Division = %d\n",c);
}

void input(int *a,int *b)
{
    printf("Enter Two number :- ");
    scanf("%d%d",&*a,&*b);
   
}

void meenu()
{
    printf("_________________________");
    printf("1.Addtion \t2.substraction\n3.multi\t4.divide\n");
}
void main()
{
    int x,y,n;
    printf("Enter choice first");
    scanf("%d",&n);
    input(&x,&y);
    printf("one = %d \t Two=%d\t\n",x,y);
    // sumation(x,y);
    // subtract(x,y);
    // multi(x,y);
    // divide(x,y);
    do
    {
        meenu();
        switch (n)
        {
        case 1:
        sumation(x,y);
        exit(0);
            break;
        case 2:
        subtract(x,y);
        exit(0);
        break;
        case 3:
        multi(x,y);
        exit(0);
        break;
        case 4:
        divide(x,y);
        exit(0);
        break;
        case 5:
        exit(10);
        break;
        default:
        printf("You enter Wrong Choice");
            break;
        }
    } while (n!=5);

    
}