#include <stdio.h>
#include <cs50.h>

//unfinished
int main(void)
{
    int a = get_int("Type a number to convert in binare(32 bits): ");
    int ext = get_int("What extension memory in bits (8,16,32,...): ");
    for(int i = ext; i == 0; i--)
    {
        int rest;
        if(a%2==0)
        {
            a /= 2;
            rest = 0;
        }
        else
        {
            a-=1, a/=2;
            rest = 1;
        }
        printf("%i", rest);
    }
    printf("\n");
}