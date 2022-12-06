#include<stdio.h>
struct one{
        int id;
        char name[10];
        int value;
    };

void main()
{
    struct one first;
    first.id=12;
    strcpy(first.name,"sdiubf");
    first.value=4567;
    printf("%d\n",first.id);
    printf("%s\n",first.name);
    printf("%d\n",first.value);

}