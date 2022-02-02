#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int f=0, s=1, n, t, i;

    printf("Enter the Fibonacci Term : ");
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        if(i<=1)
        {
            n=i;
        }
        else
        {
            n=f+s;
            f=s;
            s=n;
        }
        printf("%d\t",n);
    }


    getch();
    return 0;
}
