#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter n.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i*i);
    }
    printf("Sum of cubes of first %d natural numbers = %d.",n,sum);
    return 0;
}


