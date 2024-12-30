#include <stdio.h>

void main() 
{
    int i,j;
    char n ='Z' ;
    for (i=8;i>0;i--)
    {
        for (j=8;j>i;j--)
        {
            printf ("%c\t",n--);
        }
        printf ("\n");
}
}
