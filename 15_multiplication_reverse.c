#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d" , &n);
    for (int i = 10; i >=1 ; i--)
    {
        printf("%d X %d = %d\n" , n , i , n*i);
    }
    
    return 0;
}