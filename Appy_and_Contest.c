#include <stdio.h>
long long gcd(long long a, long long b) {
    if (b == 0)
return a;
return gcd(b, a % b);
    
}
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
    
}
int main() {
    int t;
scanf("%d", &t);
while (t--) {
    long long n, a, b, k;
scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
long long lcm_ab = lcm(a, b);
long long common_count = n / lcm_ab;
long long a_count = n / a - common_count;
long long b_count = n / b - common_count;
if (a_count + b_count >= k)
printf("Win
");
else
printf("Lose
");
}
return 0;
}
