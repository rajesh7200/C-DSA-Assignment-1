#include<stdio.h>
int main()
{
    int h,m;
    char a;
    printf("Enter Time as HH:MM -> ");
    scanf("%d%c%d",&h,&a,&m);
    printf("%d Hour and %d Minute",h,m);
    return 0;
}