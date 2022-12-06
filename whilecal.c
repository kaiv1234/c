#include<stdio.h>

void add(int a, int b)
{
   int c=a+b;
   printf("%d%d",a,b);
   printf("%d + %d= %d ",a,b,c);
   
   // you define input inside the class

   /* int c,d,sub;
    printf("Enter the numbers :- ");
    scanf("%d%d",&c,&d);
    sub=c+d;
    printf("%d",sub);*/
}

void sub(int c , int d)
{
    int sub;
    sub=c-d;
    printf("%d",sub);
}

void table(int n)
{
    int mul,i;
    for(i=1;i<=10;i++)
    {
        mul=n*i;
        printf("%d * %d = %d\n",n,i,mul);
    }
}

void square()
{
    int e,squa;
    printf("Enter the numbers :- ");
    scanf("%d",&e);
    squa=e*e;
    printf("%d",squa);
}

void cube()
{
    int f,cub;
    printf("Enter the numbers :- ");
    scanf("%d",&f);
    cub=f*f*f;
    printf("%d",cub);
}

//void input()


int main()
{
    //add(12,10);
      sub(15,12);
    // table(5);
    //square();
    //cube();
    return 0;
}