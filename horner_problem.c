#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10],i,j,n,m,k,p[10],x=1;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	for(i=n;i>=0;i--)
	{
	    scanf("%d",&a[i]);
	}
	p[n]=a[n];
	x=1;
	for(j=m;j>0;j--)
	{
	    i=n-x;
	    p[i]=a[i]+(k*p[i+1]);
	    x++;
 	}
    printf("%d",p[i]);
	return 0;
}

