#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,z,r,t,ans=0,sq,sq1,sqcount=0,rev=0,revsq,revsq1,revsqcount=0;
    scanf("%d",&a);
    sq=pow(a,2);
sq1=sq;
    while(sq1>0)
    {
        sqcount++;
    sq1=sq1/10;
    }
x=a;
    while(x>0)
    {
        r=x%10;
    
    rev=(rev*10)+r;
    x=x/10;
    }
    revsq=pow(rev,2);
revsq1=revsq;
    while(revsq1>0)
    {
        revsqcount++;
    revsq1=revsq1/10;
    }
    while(sq>0)
    {
        t=sq%10;
        ans=(ans*10)+t;
        sq=sq/10;
        
    }
    if(ans==revsq&&sqcount==revsqcount)
{
    printf("True");
}    
else{
    printf("False");
}
}