#include <stdio.h>
int isBinaryArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0 && arr[i] != 1)
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
        int result = isBinaryArray(arr, length);
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