#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int x = get_int("");
   switch(x)
   {
       case 1:
           printf("Yeah!\n");
           break;

       default:
           printf("NO!\n");
           break;
   }
   string message = (x != 1) ? "Try again" : "You're right";
   printf("%s\n", message);

}