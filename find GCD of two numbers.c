#include <stdio.h>
int gcdCalc(int n1,int n2)
{
    int i,gcd;
    for(i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
           gcd=i;
        }
    }
        return gcd;
}
int main()
{
    int num1,num2,gcd;
    printf("Enter the two numbers:");
    scanf("%d %d",&num1,&num2);
    gcd=gcdCalc(num1,num2);
    printf("GCD of %d and %d is %d",num1,num2,gcd);
    return 0;

}

