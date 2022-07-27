#include<stdio.h>
int main()
{
    int n,cnt=0,i;
    printf("Enter n.\n");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
         cnt++;
         printf("%d is not prime.",n);
         break;
        }
    }
    if(cnt==0)
    {
         printf("%d is prime.",n);
    }
    return 0;
}


