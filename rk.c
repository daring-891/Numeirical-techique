#include<stdio.h>
#include<math.h>
float f(float x,float y){

	return (x*y);
}


void main()
{

	int j=0;
	float h=0.1,x=1,y=2,k,k1,k2,k3,k4;
	printf("value of x and y at itration %d is %f %f \n",j,x,y);
	j++;
	while(x<=1.4){

				k1=h*f(x,y);
				k2=h*f(x+h/2,y+k1/2);
				k3=h*f(x+h/2,y+k2/2);
				k4=h*f(x+h,y+k3);

				k=(k1+2*(k2+k3)+k4)/6;


			y = y+ k;
			x = x+h;
			printf("value of x and y at itration %d is %f %f \n",j,x,y);
	j++;






	}

}