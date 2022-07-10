#include<stdio.h>
int main()
{
    int lenght;
    char a[100];
    printf("Enter a string to calculate lenght :");
    gets(a);
    lenght=strlen(a);
    printf("The lenght of string is %d",lenght);
    return 0;
}