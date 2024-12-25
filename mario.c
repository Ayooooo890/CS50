#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Mario question blocks
    for(int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    // Prompt user for positive integer
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Found size, making the 2d world with #'s as blocks
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
