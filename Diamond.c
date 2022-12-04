#include<stdio.h>

void main()
{
    int n, i, j, k;
  //int m = (n+1)/2;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

 for ( i = 1; i <= n ; i++)
   {  
       for ( j = n-i; j >= 1; j--)
       {
         printf(" ");
        }
       for ( k = 1; k <= 2*i-1; k++)
       {
         printf("*");
       }
       
       printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1; j<=n-i;j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= 2*i-1; k++)
       {
         printf("*");
       }
       printf("\n");
    }
    
}