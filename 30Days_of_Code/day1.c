/*
Input Format

A single line of text denoting  (the variable whose contents must be printed).

Output Format

Print Hello, World. on the first line, and the contents of  on the second line.

Sample Input

Welcome to 30 Days of Code!
Sample Output

Hello, World. 
Welcome to 30 Days of Code!

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105]; 
    
    // Read a full line of input from stdin and save it to our variable, input_string.
    scanf("%s", input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using printf.
    printf("\n\nHello, World.\n");
    printf("%s", input_string );
    
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    
    return 0;
}