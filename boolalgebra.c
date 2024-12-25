#include <cs50.h>
#include <stdio.h>
int main(void)
{
    printf("ONE PLUS ONE EQUALS ONE IN BOOLEAN ALGEBRA.\n");

    char c = get_char("Do you Agree? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed. You know your stuff.\n");
    }

    else if (c == 'n' || c == 'N')
    {
        printf("NOT AGREED? YOU SHOULD STUDY ON THIS!\n");
    }


}


