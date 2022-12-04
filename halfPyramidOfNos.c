#include <stdio.h>

int main()
{
int n, i, j;
printf("Entre the number of rows: ");
scanf("%d", &n);

// Pattern 1
// 1
// 1 2
// 1 2 3

for( i=1; i<=n; i++)
{ 
    for(j=1; j<=i; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
}
printf("\n");

// Pattern 2
// 1
// 22
// 333

for (int i = 1; i <= n; i++)
{
    for (int j = 0; j < i; j++)
    {
        printf("%d", i);
    }
    printf("\n");
}
printf("\n");

// Pattern 3
// increment by 2

for (int i = 1, p = 0; i <= n; i++, p += 2)
{
    for (int j = 0; j < i; j++)
    {
        printf("%d", p);
    }
    printf("\n");
}
printf("\n");

// Pattern 4
// 1
// 22
// 111
// 2222

for (int i = 1; i <= n; i++)
{
    for (int j = 0; j < i; j++)
    {
        if (i%2 == 0)
        {
            printf("2");
        }
        else
        printf("1");
    }
    printf("\n");
}

// Inverted
printf("\nInverted\n");
for(i=n; i>=1; i--)
{
    for(j=1; j<=i; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
}

return 0;
}