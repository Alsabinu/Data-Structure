#include<stdio.h>
struct polynomial
{
	int coeff;
	int exp;
};
void main()
{
	int term,n,i;
	printf("Enter the no.of terms for polynomial:\n");
	scanf("%d",&n);
	struct polynomial x[n];
	printf("Enter the elements of the polynomial:\n");
	printf("Coefficient and exponent should be in descending order:\n");
	for(i=0;i<n;i++)
	{
		printf("coefficient:");
		scanf("%d",&x[i].coeff);
		printf("\nexponent:");
		scanf("%d",&x[i].exp);
	}
		printf("Entered element in polynomial form is:\n");
		for(i=0;i<n;i++)
		{
			printf("(%dx^%d)",x[i].coeff,x[i].exp);
			if(i<(n-1))
			{
				printf("+");
			}
		}
		
		
}
