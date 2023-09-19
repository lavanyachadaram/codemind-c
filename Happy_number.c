#include <stdio.h>
int isHappyNumber(int num) {
    int sum, digit;
while (num > 9) {
    sum = 0;
while (num != 0) {
    digit = num % 10;
sum += digit * digit;
num /= 10;
}
num=sum;
}
if(num==1||num==7){
    return 1;
}
else{
    return 0;
}
}
int main(){
    int num;
    scanf("%d",&num);
    int result=isHappyNumber(num);
    if(result){
        printf("True
");
    }
    else{
        printf("False
");
        
    }
    return 0;
}