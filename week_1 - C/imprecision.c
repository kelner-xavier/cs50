#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Division:\n");
    float x = get_float("Type a number: ");
    float y = get_float("Type a number: ");

    printf("%.50f\n", x/y);
}
