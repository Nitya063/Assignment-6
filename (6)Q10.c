#include<stdio.h>
int main()
{
    int n,rev=0,r;
    printf("Enter n.\n");
    scanf("%d",&n);
    printf("Reverse of %d is = ",n);
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("%d.",rev);
    return 0;
}


