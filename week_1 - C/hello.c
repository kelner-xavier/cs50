#include <stdio.h>
#include <cs50.h>

//Hello world with variable in C
int main(void)
{
	string answer = get_string("What's your name?\n #: ");
	printf("hello, %s\n", answer);
}

