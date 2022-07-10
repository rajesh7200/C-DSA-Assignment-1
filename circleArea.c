#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter the redius of the circle : ");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of circle is %f having the redius %d",area,r);
    return 0;
}