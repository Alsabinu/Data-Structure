#include<stdio.h>
void main()
{
	int j,n,temp,space,time;
	space=5*4;
	int i=1;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	time+=2;
	int a[n];
	printf("Enter the elements:");
	time++;
	for(i=0;i<n;i++)
 		{
  			scanf("%d",&a[i]);
 			time++;
		}
 	time++;
 	time+=1;
	for(i=1;i<n;i++)
 		{
 			temp=a[i];
  			j=i-1;
 			while(j>=0 && temp<a[j])
  				{
   					a[j+1]=a[j];
   					j--;
  				}
  			a[j+1]=temp;
		} 
 	time++;
 	printf("sorted elements are:");
 	for(i=0;i<n;i++)
		{
 			printf("%d\n",a[i]);
			time++;
 		}
	time++;
 	time+=1;
 	printf("space complexity is:%d\n",space);
 	printf("time complexity is:%d\n",time);
}







































.
