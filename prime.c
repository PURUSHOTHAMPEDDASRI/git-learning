#include<stdio.h>
void main()
{
	int n1,n2,i,j,c1;
	printf("Two numbers to print prime range\n");
	printf("enter the n1 number\n");
	scanf("%d",&n1);
	printf("enter the n2 number\n");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		for(j=1,c1=0;j<=i;j++)
		{
			if(i%j==0)
			{
				c1++;
			}
		}
		if(c1==2)
		printf("%d ",i);
	}
}
