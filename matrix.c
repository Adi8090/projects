#include <cs50.h>
#include <stdio.h>

int main(void)
{
  
    long n;
    printf("Let's make Mario's double pyramid!\n");
    do
    {
        n = get_long("hieght: ");
    }
  while (n < 0 || n > 200);
    for (long i = 0; i < n; i++)
    {
        long number_of_spaces = (n - 1) - i;
        long number_of_hashes = i * 1;

            for (long j = 0; j < number_of_spaces; j++)
        {
            printf(" 1   0  ");
        }

            for (long k = 0; k < number_of_hashes; k++)
        {
            printf("   0   1  ");
        }

        printf("   1  0   ");

    for (long k = 0; k < number_of_hashes; k++)
        {
            printf("   1   0   ");
        }

        printf("\n");
        }
    }