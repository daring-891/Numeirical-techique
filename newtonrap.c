
#include<stdio.h>
#include<math.h>


float fx(float x) {
	return (pow(x,3)-x-3);
}

float f1x(float x) {
	return (3*pow(x,2)-1);
}

void main() {

int a,b,i=0;
float xnew,xold;
printf("Enter the values of a and b");
scanf("%d%d",&a,&b);
xnew=(a+b)/2;
do{
	i++;	
	xold=xnew;
	xnew=xold-(fx(xold)/f1x(xold));
	
	printf("\nvalue of root at iterstion %d is %f",i,xnew );
	}while(fabs(fx(xnew))>0.00001);
	
}
