
#include<stdio.h>
int main()
{
	int mat[3][3],i,j,sum=0,a=0;
	printf("\n\n   READ A 2D ARRAY OF SIZE 3*3 AND PRINT THE MATRIX: \n ");
	printf("----------------------------------------------------\n ");
	printf(" INPUT ELEMENTS IN THE 3*3 MATRIX: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  element - [%d],[%d]:\t ", i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nTHE MATRIX IS : \n ");
	for(i=0;i<3;i++)
	{
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",mat[i][j]);
		}
		printf("\n\n");
	}
if(i==j)
	for(i=0;i<3;i++)
	{
		sum=sum+mat[i][i];
		a=a+mat[i][3-i-1];
	}

			printf("THE SUM OF ELEMENTS OF DIAGONAL.1 = %d \n",sum);
			printf("\nTHE SUM OF THE ELEMENTS OF DIAGONAL.2 = %d",a);
}
