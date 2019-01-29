#include<stdio.h>
#include<math.h>
float f(float x,float y){

	return (x+y);
}


void main()
{

	int j=0;
	float h=0.1,x=0,y=1;
	printf("value of x and y at itration %d is %f %f \n",j,x,y);
	j++;
	while(x!=0.5){

			y = y+ h*f(x,y);
			x = x+h;
			printf("value of x and y at itration %d is %f %f \n",j,x,y);
	j++;






	}

}