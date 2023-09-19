#include <stdio.h>
double calculateTotalAmount(double principle, double rate, double time) {
    double interest = 1 + (rate / 100);
double totalAmount = principle;
for (int i = 1; i <= time; i++) {
    totalAmount *= interest;
}
return totalAmount;
    
}
int main() {
    double principle, rate, time;;
scanf("%lf %lf %lf", &principle, &rate, &time);
double totalAmount = calculateTotalAmount(principle, rate, time);
printf("%.2lf
", totalAmount);
return 0;
    
}