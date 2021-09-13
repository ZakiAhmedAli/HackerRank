/*
Objective
Today we will expand our knowledge of strings, combining it with what we have already learned about loops. Check out the Tutorial tab for learning materials and an instructional video.

Task
Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

Note:  is considered to be an even index.

Example


Print abc def

Input Format

The first line contains an integer,  (the number of test cases).
Each line  of the  subsequent lines contain a string, .

Constraints

Output Format

For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.

Sample Input

2
Hacker
Rank
Sample Output

Hce akr
Rn ak

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void myFunction(char s[]);
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i ,n;
	char s[10000];
    scanf("%d",&n);
    
    for( i=0;i<n;i++)
    {
       scanf("%s",s);
       myFunction(s);
   }
}

void myFunction(char s[])
{
	int i=0;
	for(i=0 ; i<strlen(s) ; i++ )
	{
		if(i%2 == 0)
		{
			printf("%c",s[i]);
		}
	}
	printf(" ");
	
	for(i=0 ; i<strlen(s) ; i++ )
	{
		if(i%2 != 0)
		{
			printf("%c",s[i]);
		}
	}
	printf("\n");
	
}

