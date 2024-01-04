#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	a=b+c;
	a=a-b;
	b=b+c;
	c=b-c;
	b=d-c-a;
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0; 
}
