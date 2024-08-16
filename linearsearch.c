#include <stdio.h>
void main()
{
 	int n,i,x,time=0,space=0;
 	printf("Enter the value of n:");
	scanf("%d",&n);
	time+=2;
 	space=n*4;
 	time++;
	int a[n];
	printf("Enter the number to be found:");
	scanf("%d",&x);
	time+=2;
	time++;
 	int count=0;
 	space=space+4;
	time++;
 	printf("Enter the elements:");
 	time++;
 	for(i=0;i<n;i++)
		{ 
  			scanf("%d",&a[i]);
 		}
 	time++;
 	for(i=0;i<n;i++)
 		 {
   			if(a[i]==x)
   				{
  					 count++;
  					 printf("Number found at %d position\n",i+1);
 				}
 		}
 	time++;
	if(count>0)
 		{
 			printf("Item is found %d times\n",count);
		}
	else
 		{
 		printf("Item not found\n");
 		}
 	time+=5;
 	printf("Time compexity is:%d\n",time);
	printf("Space complexity is:%d",space);
}
