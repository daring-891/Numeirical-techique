#include<stdio.h>
#include<math.h>
float f(float x){

	return (exp(sin(x)));
}


void main()
{

	
	float h=0.314,i,a=0,b=(3.14/2),result=0,sum=0;
	for(i=a;i<=b;i=i+h)
	{
		if(i==a||i==b)
		{
			result=result+f(i);


		}
		else
		{
			sum=sum+f(i);
		}

	}
	result=(h/2)*(result+2*sum);

	printf("Intergration of the function is %f\n", result );
}