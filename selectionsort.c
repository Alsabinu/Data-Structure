#include<stdio.h>
void main()
{
	int i=0,n,j,temp,small,time,space;
 	space=8*4;
 	printf("Enter number of elements:");
 	scanf("%d",&n);
 	time+=2;
 	int a[n];
 	printf("Enter the elements:");
 	time++;
 	for(i=0;i<=n-1;i++)
  		{
  			scanf("%d",&a[i]);
 		}
  	time+=2;
 	for(i=0;i<=n-1;i++)
 		{
 			j=i+1;
  			small=i;
  			time++;
  			for(j=i+1;j<=n-1;j++)
  				{
  					if(a[small]>a[j])
 						{
    							small=j;
   						}
   			time++;
  				}
  			if(i!=small)
 				{
   					temp=a[i];
   					a[i]=a[small];
   					a[small]=temp;
  				}
 			time++;
 		}
 	time+=1;
	printf("sorted elements are:");
 	time++;
 	for(i=0;i<n;i++)
 		{
 			printf("%d\n",a[i]);
 			time++;
 		}
 	time+=1;
 	time++;
 	printf("Time complexity is:%d\n",time);
 	printf("space complexity is:%d\n",space);\
 	time+=2;
}
