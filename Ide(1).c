#include <stdio.h>

int main(void) {
	// your code goes here
	int m,t,i,a;
	float r,x=0;
	scanf("%d",&m);
	scanf("%d",&t);
	scanf("%f",&r);
	a=m*t;
	for(i=1;i<=t;i++)
	{
	    x=x+(a*r)/1200;
	    a=a-m;
	}
	a=m*t-x;
	printf("%d",a);
	return 0;
}

