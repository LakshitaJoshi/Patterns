#include <stdio.h>

void main()
{
char input, alphabet = 'A' ;
printf("Enter the alphabet (caps) which you want to see on the last row: ");
scanf("%c", &input);
for( int i=1; i <= (input - 'A' + 1); i++)
{
for( int j = 1; j <= i; j++)
{
    printf("%c", alphabet);
}
alphabet++;
printf("\n");
}
}