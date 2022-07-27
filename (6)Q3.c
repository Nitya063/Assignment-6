#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter n.\n");
    scanf("%d",&n);
    for(i=1;i<=(2*n);i++)
    {
        if(i%2!=0)
        {
         sum=sum+i;
        }
    }
    printf("Sum of first %d odd natural numbers = %d.",n,sum);
    return 0;
}


