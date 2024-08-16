#include <stdio.h>
void main()
	{
    		int n, i, j, A[20], temp,c=0;
    		printf("Enter number of elements: ");c++;
    		scanf("%d", &n);c++;
    		printf("Enter the elements: ");c++;
   		for (i = 0; i < n; i++, c++)
   			{
        			scanf("%d", &A[i]);c++;
    			}
   		c++;
   		for (i = 0; i < n - 1; i++,c++)
   			{
        		for (j = 0; j < n - 1 - i; j++,c++)
        			{
           				if (A[j] > A[j + 1])
           					{
                 					temp = A[j];c++;
               						A[j] = A[j + 1];c++;
               						A[j + 1] = temp;c++;
            					}
        			}
    			}
    
    		printf("Sorted array is: ");
    		c++;
    		for (i = 0; i < n; i++,c++)
    			{
        			printf("\t%d", A[i]);c++;
   			}
   		c++;
    		printf("\n The space complexity is %d\n",25+(n*4));c++;
    		printf("The time complexity is %d",c+1);
	}
