#include<stdio.h>
int main()
{
    int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int t,j;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
{
    if(a[j]<a[i])
{
    t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
for(i=0;i<n;i++)
{
    if(a[i]!=a[i+1])
    {
        printf("%d ",a[i]);
    }
}
}