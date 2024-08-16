#include<stdio.h>
void main()
{
 	int i,j,m=1,r,c;
 	printf("Enter row of the matrix:");
 	scanf("%d",&r);
 	printf("Enter column of the matrix:");
 	scanf("%d",&c);
 	int a[20][20],b[20][20];
 	printf("Enter the matrix elements:");
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
					{
						printf("%d\t",a[i][j]);
					}
				printf("\n");
		        }
		printf("row\t column\t value\n");
		b[0][0]=i;
		b[0][1]=j;
		for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
					{
						if(a[i][j]!=0)
							{
								b[m][0]=i;
								b[m][1]=j;
								b[m][2]=a[i][j];
								m++;
							}
					}
			}
		b[0][2]=m-1;
		for(i=0;i<m;i++)
			{
				for(j=0;j<3;j++)
					{
						printf("%d\t",b[i][j]);
					}
		
				printf("\n");
			}
}
