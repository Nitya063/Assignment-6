#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter n.\n");
    scanf("%d",&n);
    printf("Factorial of %d is = ",n);
    while(n!=0)
    {
        fact=fact*n;
        n--;
    }
    printf("%d.",fact);
    return 0;
}
