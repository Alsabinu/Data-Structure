#include<stdio.h>
void main()
{
	int x,flag=0,mid,i,n,space,time;
	space=9*4;
	printf("Enter number of elements:");
	scanf("%d",&n);
 	time+=2;
 	int a[n];
 	int left=0,right=n-1;
 	printf("Enter the elements:");
 	time++;
 	for(i=0;i<n;i++)
 		{
 			scanf("%d",&a[i]);
 			time++;
 		}
 	time+=1;
 	printf("Enter the number to be found:");
 	scanf("%d",&x);
 	time+=3;
 	while(left<=right)
  		{
  			mid=(left+right)/2;
   			if(x==a[mid])
   				 {
    					printf("Element is found at %d\n",mid+1);
    					flag=1;
    					break;
    				 }
    			else if(x>a[mid])
   				 {
    					left=mid+1;
    					continue;
    				 }
  			else if(x<a[mid])
    				{
   					 right=mid-1;
    					 continue;
    				}
    			time+=3;
  		}
 	if(flag==0)
  		{
  			printf("Element not found");
  			time+=2;
  		}
 	else 
 		{
 			printf("Element found\n");
 		}
 	time++;
  	printf("space complexity is:%d\n",space);
  	printf("time complexity is:%d\n",time);
}
