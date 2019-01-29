 #include<stdio.h>
#include<math.h>

void main(int argc, char const *argv[])
{
	int x[100];
	int y[100],n,i, a;
	float result;
	printf("no. of entries\n");
	scanf("%d",&n);
	printf("enter values of x\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter values of y\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
	}
	printf("enter the value of x where to find");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		float num=1,dem=1;
		int j;
		for (j=0; j < n; ++j)
		{
			if(j==i);
			else
			{
				num= num*(a-x[j]);
					dem= dem*(x[i]-x[j]);

			}

		}
		result=result + (num/dem)*y[i];
	
	
	}


	printf("value of y at %d is %f \n", a,result );
}
