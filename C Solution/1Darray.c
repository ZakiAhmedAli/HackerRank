#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[1000];
    int n ,sum=0;
    int i;
    //printf("Enter number of element: ");
    scanf("%d",&n);
    
    for(i=0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
      printf("%d",sum);
    return 0;
}