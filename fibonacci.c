#include<stdio.h>
void main()
{
    int i,n;
    int a=0,b=1;
    printf("Enter the value of n:");
    scanf ("%d",&n);
    printf("the values of a and b is %d %d",a,b);
    for(i=2;i<n;i++)
    {
       int c = a+b;
        printf("the value of c is %d",c);
        a=b;
        b=c;
    }
}
