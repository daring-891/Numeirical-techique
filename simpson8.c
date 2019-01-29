#include<stdio.h>
#include<math.h>
float f(float x){

	return (1/(1+pow(x,2)));
}


void main()
{

	int j;
	float h=0.2,i,a=0,b=6,result=0,sum2=0,sum4=0;
	for(j=0,i=a;i<=b;i=i+h,j++)
	{
		if(i==a||i==b)
		{
			result=result+f(i);


		}
		else if(j%3==0)
		{
			sum4=sum4+f(i);
		}

		else 
		{
			sum2=sum2+f(i);
		}
		
	}
	result=(h/3)*(result+2*sum2+3*sum4);

	printf("Intergration of the function is %f\n", result );
}