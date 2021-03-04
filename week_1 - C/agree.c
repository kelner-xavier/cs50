#include <stdio.h>
#include <cs50.h>


int main void()
{
    //Get a variable char and get the char by a pre-stablished function (<cs50.h>)
    char c = get_char("Do you agree: ");


    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed.\n");
    }
}
