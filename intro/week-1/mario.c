#include <stdio.h>
#include <cs50.h>

/*int main(void)
{
    printf("????\n");
}
*/


/*int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");
}*/


//Get a Positive number

/*int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
        if(n < 1)
        {
            printf("Put a positive number, pls\n");
        }
    }
    while(n < 1);

    //Now replicate it on question marks
    for(int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}*/

//Now let's do this with "bricks" instead of question marks

// I want to make a 3x3 block of bricks so initially i do this way
/*int main(void)
{
    printf("###\n");
    printf("###\n");
    printf("###\n");
}*/

// But to be more logical and legible let's do some for loops
void mblock(int x, int y);

int main(void)
{
    /* Ok, I know that I'll do a "#" 3 times, right? So:
    for (int i = 0; i < 3; i++)
    {
        // But now I wanna do "###" 3 times too (3x3 block), So let's do another for loop but,
        // at this time let's change the variable to be more legible by putting "j":
        for (int j = 0; j < 3; j++)
        {
            // Now Just print one single "#" to do it 3 times at te first loop, and another 3
            // times at the second by making a 3x3 block of bricks :D
            printf("#");
        }
        // Don't forget to break the line or it'll print in just one line like "#########"
        printf("\n");
    }*/
    mblock(3, 6);
}

// Now a function made by me to make it more fancier ;D (didn't changed almost nothing lol)
void mblock(int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        // But now I wanna do "###" 3 times too (3x3 block), So let's do another for loop but,
        // at this time let's change the variable to be more legible by putting "j":
        for (int j = 0; j < y; j++)
        {
            // Now Just print one single "#" to do it 3 times at te first loop, and another 3
            // times at the second by making a 3x3 block of bricks :D
            printf("#");
        }
        // Don't forget to break the line or it'll print in just one line like "#########"
        printf("\n");
    }
}