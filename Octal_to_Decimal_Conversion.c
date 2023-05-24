#include <stdio.h>
#include <string.h>
int convertOctalToDecimal(char octal[])
{
    int decimal = 0;
    int length = strlen(octal);
    int power = 1;
    for (int i = length - 1;
    i >= 0;
    i--)
    {
        decimal += (octal[i] - '0') * power;
        power *= 8;
        }
        return decimal;
    
}
int main()
{
    char octal[100];
    scanf("%s", octal);
    int decimal = convertOctalToDecimal(octal);
    printf("%d
", decimal); 
    return 0;
    
}