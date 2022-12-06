#include<stdio.h>
void table()
{
    int i,n,tab;
    printf("Enter no for table");
    scanf("%d",&n);
    for ( i = 0; i <=10; i++)
    {
        /* code */
        tab=n*i;
        printf("%d * %d = %d\n",n,i,tab);
    }
    
}

int adds(int a,int b){
    return a+b;
}
void main()
{
    int a,b,c;
    printf("Enter no :-\n");
    scanf("%d%d",&a,&b);
    printf("%d & %d",a,b);
    //table();
    c=adds(a,b);
    printf("%d",c);
}