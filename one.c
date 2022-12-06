#include<conio.h>
#include<stdio.h>
int main()
{
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
    int a;
    scanf("%d",a);
    printf("%d\n",a);
    printf("hello , sahil");
    return 0;
}