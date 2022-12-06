#include<stdio.h>
 void table()
{
    int n,mul,i=1;
    printf("Ente no  ");
    scanf("%d",&n);
    printf("entered no = %d\n\n",n);
    while(i<=10)
    {
        mul=n*i;
        printf("%d * %d = %d \n",n,i,mul);
        i++;
    }
}

void main()
{
    printf("Hello\n\n");
    table();
    printf("Program print after function called ");
}

