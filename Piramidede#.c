#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;//number

    do
    {
    printf("Height:");
    scanf("%i",&n); //user input
    } while (n <1 || n >8); //do while de condicion is true

    for (int i = 1; i<=n; i++) //number of lines
    {
        for(int j = 1; j<=i; j++) //number of asher per line
      {
         printf ("#");
      }
       printf("\n");
    }
    return 0;
}
