#include<stdio.h>
int main()
{
    int n,r,i,f=1,s=0; 
    scanf("%d",&n);
    int t=n; 
    while(t!=0)
    {
        r=t%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;
            }
            s=s+f;
            f=1; 
            t=t/10;
            }
            if(n==s)
            {
                printf("The number %d is a strong number",n);
                }
                else 
                {
                    printf("The number %d is not a strong number",n); 
                    
                }
    
}