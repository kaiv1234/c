#include<stdio.h>

void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d\t%d",a,b);
}
// jar tumala kont pan printing funcction chya baher pahije tar pointer 
//use kara function chya baher pan values tyach rahnar pointer ne karan tumi direct memery address madhun change karta

void main()
{
    int c=304,d=60;
    printf("%d\t%d\n",c,d);
    int a[5]={12,23,34,45,67},i;
   for (i=0;i<5;i++)
   {
    printf("%d\t",a[i]);
   }

   swap(a[0],a[4]);
   for (i=0;i<5;i++)
   {
    printf("%d\t",a[i]);
   }
   swap(c,d);

}