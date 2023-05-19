#include<stdio.h>
int GCD(int a,int b)
{
    if(b==0)
    return a;
    return GCD(b,a%b);
}
int main()
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int I=a[0];
    int g=a[0];
    for(int i=1;i<n;i++)
    {
        g=GCD(a[i],I);
        I=(I*a[i])/g;
    }
    printf("%d",I);
}