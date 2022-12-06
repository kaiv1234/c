#include<stdio.h>

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void main()
{
    int a[5]={12,23,34,45,67},i;
    //printf("%d",a[2]);
    /*int b[5],i;
    for (i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
    */
   for (i=0;i<5;i++)
   {
    printf("%d\t",a[i]);
   }

   swap(&a[0],&a[4]);
   for (i=0;i<5;i++)
   {
    printf("%d\t",a[i]);
   }

}