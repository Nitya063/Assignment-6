#include<stdio.h>
int main()
{
    int n,cnt=0;
    printf("Enter n.\n");
    scanf("%d",&n);
    printf("Number of digits in %d is = ",n);
    while(n!=0)
    {
        cnt++;
        n=n/10;
    }
    printf("%d.",cnt);
    return 0;
}

