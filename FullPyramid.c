#include<stdio.h>

int main(){

    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i ++)
    {
       //space
       for ( j = 1; j <= (n-i); j++)
       {
           printf(" ");
       }
       for (k = 0; k <(2*i-1); k++)
       {
           printf("*");
       }
       printf("\n");
    }

// Inverted
    printf("\nInverted\n");
    for ( i = n; i >= 1; i--)   
    {
        for ( j = n; j > i; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <= (2*i - 1); k++)
        {
            printf("*");
        }    
    printf("\n");   
    }
}