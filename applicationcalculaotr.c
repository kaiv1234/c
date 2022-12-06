#include<stdio.h>
#define PI 3.14

void sumation(int a,int b,int *c)
{
    *c=a+b;
    printf("Addition = %d\n",*c);
}
void subtract()
{
    int a,b,c;
    c=a-b;
    printf("Subtraction = %d\n",c);
}

// void avarage()
// {
//     continue;
// }

void multi()
{
    int a,b,c;
    c=a*b;
    printf("Multiply = %d\n",c);
}

void divide()
{
    int a,b,c;
    c=a/b;
    printf("Division = %d\n",c);
}

void input(int *a,int *b)
{
    printf("Enter Two number :- ");
    scanf("%d%d",&*a,&*b);
    

}
void main()
{
    int x=1,y=2,z=0;
    input(&x,&y);
    printf("one = %d \t Two=%d\t",x,y);
    sumation(x,y,&z);
    printf("Third =%d",z);
}