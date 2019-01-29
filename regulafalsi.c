#include<stdio.h>
#include<math.h>

float f(float x) { return (pow(x,4)-x-10);
}


void main()
{

	int i=0;
	float a,b,cOld,cNew=0;
	printf("Enter the values of a & b");
	scanf("%f%f",&a,&b);
		do{
			cOld=cNew;
			cNew=((a*f(b))-(b*f(a)))/(f(b)-f(a));
		
		if(f(cNew)>0)
				b=cNew;

			else
				a=cNew;
		i++;
		printf("\n root after itreation no %d is %f",i,cNew );
	}while((cNew-cOld)>0.0001);	
}
