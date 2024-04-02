#include <stdio.h>
void main()
{
	int n;
	printf("Enter the number of rows: \n");
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
			printf("%d ",(i+1));
		printf("\n");
	}
}
