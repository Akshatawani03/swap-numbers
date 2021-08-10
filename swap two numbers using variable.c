#include <stdio.h>
int main()
{
    int a,b;
    printf("\n Enter two numbers");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swapping a=%d\nb=%d",a,b);
     return 0;
}