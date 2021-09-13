
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int n  ,i=0;
	printf("Enter integer number:");
	scanf("%d",&n);
	int *ptr = malloc(sizeof(int) * n);
	
	for(i=0 ; i<n ; i++)
		scanf("%d", &ptr[i]);
	
	for(i=n-1 ; i>=0 ; i--)
		printf("%d",ptr[i]);
	
	
    return 0;
}