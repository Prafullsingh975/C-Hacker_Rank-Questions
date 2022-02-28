/*
Task

This challenge requires you to print Hello, World!  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.

Example
s = "Life is beautiful"

The required output is:

Hello, World!  
Life is beautiful  
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]s", &s); //[^\n] by keeping these,scanf read until reach new line in command line.
    printf("Hello, World! \n");
  	printf("%s",s);   
    return 0;
}