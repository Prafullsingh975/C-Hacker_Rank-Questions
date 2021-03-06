/*
Task
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
Declare 4 variables: two of type int and two of type float.
Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
Use the + and - operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line. 

Input Format
The first line contains two integers.
The second line contains two floating point numbers.

Constraints
1<= integer variable <=10^4
1<= float variable <=10^4

Output Format
Print the sum and difference of both integers separated by a space on the first line,and the sum 
and difference of both float (scaled to 1 decimal place) separated by a space on the second line.

Sample Input
10 4
4.0 2.0

Sample Output
14 6
6.0 2.0

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float a,b;
    scanf("%d %d", &x,&y);
    scanf("%f %f", &a,&b);
    printf("%d %d \n",x+y,x-y);
    printf("%.1f %.1f",a+b,a-b); //.1f for one decimal place
    return 0;
}