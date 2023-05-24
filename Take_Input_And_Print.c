#include <stdio.h>
int main() 
{
    char input_string[1001];
    fgets(input_string, sizeof(input_string), stdin);
    printf("%s", input_string);
    return 0;
    
}