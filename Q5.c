#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the String.\n");
    scanf("%s",str);
    int i=printf("%s",str);
    printf("=%d",i);
    return 0;
}


