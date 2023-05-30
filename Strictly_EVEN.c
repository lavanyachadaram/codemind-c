#include <stdio.h>
int isStrictlyEven(int arr[], int length)
{ 
    for (int i = 0; i < length; i += 2) 
    {
        if (arr[i] % 2 != 0) 
        {
            return 0; 
            
        }
        }
        return 1;
    
}
int main()
{
    int length;
    scanf("%d", &length);
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
        }
        int result = isStrictlyEven(arr, length);
        if (result)
        {
            printf("True
"); 
            
        }
        else
        {
            printf("False
"); 
            
        } 
        return 0;
    
}