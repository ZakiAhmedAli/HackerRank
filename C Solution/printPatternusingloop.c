
/*
	Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   

*/
#include<stdio.h>
int main() {

	/************first solution********************
	int n;
	scanf("%d", &n);
	int len = 2*n-1;
	int min1,min2,min;
	int i,j;
  // Complete the code to print the pattern.
  // for rows
  for (i=1; i <=len; i++) {
      // for col
      for (j=1; j<=len; j++) {
        // min diff btn vertical sides
        min1 = i<=len-i ? i -1 : len-i;
        // min diff btn horizontal sides
        min2 = j<=len-j ? j -1: len-j;
        // min diff btn vertical & horizontal sides
        min = min1<=min2 ? min1 : min2;
        // print  
        printf("%d ",n-min);
      }
      printf("\n");
  }*/
  /************************ second solution********************
    int i,j,n,k;
    scanf("%d",&n);
       for(i=1;i<2*n;i++)
       { 
		   k=n;
           if(i<=n)
           {
               for(j=1;j<2*n;j++)
               {
                   printf("%d ",k);
                   if(i>j)
                   {
                       k--;
                   }
                   if(i+j>=2*n)
                   {
                       k++;
                   }
               }
           }
           if(i>n)
           {for(j=1;j<2*n;j++)
               {
                   printf("%d ",k);
                   if(j>=i)
                   {
                       k++;
                   }
                   if(i+j<2*n)
                   {
                       k--;
                   }
               }
           }
           printf("\n");
       }
********************************************************/
/************third solution********************/

int n;
printf("Enter number: ");
scanf("%d",&n);
int size = n*2-1;
int i,j;
int start=0,end =size-1;
int arr[size][size];

while(n !=0)
{
	for(i=start ; i<=end; i++)
	{
		for(j=start ; j<=end; j++)
		{
			if(i == start || j==start || i==end || j==end)
				arr[i][j]=n;
		}
	}
	n--;
	end--;
	start++;
	
}

	for(i=0 ; i<size; i++)
	{
		for(j=0 ; j<size; j++)
			printf("%d ",arr[i][j]);
		printf("\n");
			
			
	}
	   
return 0;
}