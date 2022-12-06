#include<stdio.h>

void agg(int a, int b)
{
    int c=a+b;
    printf("sum = %d",c);
}

void ahh(int *a,int *b)
{
    int c;
    c=*a+*b;
    printf("aDDTION = %d",c);
}

void main()
{
    int a=23,b=45;
    agg(a,b);
    ahh(&a,&b);
    ahh(a,b);
}