#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, *arr2,i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
   
     arr2 = (int*) malloc(num * sizeof(int));
    for(i=1;i<=num;i++)
    {
        arr2[i-1] = arr[num-i];
    }  
    
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i));
        
 /*for(i = num-1; i >= 0; i--)
        printf("%d ", *(arr + i));*/        
    return 0;
}