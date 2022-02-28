/*
Task

You have to print the character,ch,in the first line. Then print s in next line. In the last line print the sentence,sen.

Input Format

First, take a character, ch as input.
Then take the string,s as input.
Lastly,take the sentence sen as input.

Constraints

Strings for s and sen will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character,ch.
The second line prints the string,s.
The third line prints the sentence,sen.

Sample Input 0

C
Language
Welcome To C!!

Sample Output 0
C
Language
Welcome To C!!
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ 
    char ch;
    char s[100];
    char sen[100] ,a[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n"); 
    scanf("%[^\n]%*c",&sen); //The statement that we are interested in//
    // "%[^\n]%*c" means that all the characters entered as the input, including the spaces, until we hit the enter button are stored in the variable, name; provided we allocate sufficient memory for the variable.
    printf("%c \n",ch);
    printf("%s \n",s);
    printf("%s \n",sen);
    return 0;
}